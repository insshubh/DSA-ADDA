#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>a,int low,int high,int mid)
{
    int count=0;
    int i = low,j= mid+1;
    vector<int>temp(high-low+1);
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j]){
        temp.push_back(a[i]);
        i++;
        }
        else
        {
            temp.push_back(a[j]);
            count+=(mid-i+1);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(a[i]);
        i++;
    }
     while(j<=high)
    {
        temp.push_back(a[j]);
        j++;
    }
    for(int i =0;i<=high;i++)
    {
        a[i]=temp[i];
    }
    return count;
}
int mergesort(vector<int>a,int low,int high)
{
    int count =0;
    if(low>=high)
    return count;
    int mid = (low+high)/2;
    count+=mergesort(a,low,mid);
    count+=mergesort(a,mid+1,high);
    count+=merge(a,low,mid,high);
    return count;
}
int count_inversion(vector<int> arr,int n)
{
    return mergesort(arr,0,n-1);
}
int main()
{
   return 0;

}