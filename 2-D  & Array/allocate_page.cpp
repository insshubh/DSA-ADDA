#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid)
{
   int stud_count=1,pagesum=0;
   for(int i=0;i<n;i++)
   {
    if(pagesum+arr[i]<=mid)
    {
        pagesum+=arr[i];
    }
    else
    {
        stud_count++;
        if(stud_count>m || arr[i]>mid)
        return false;
        
         pagesum=arr[i];
    
    }
   }
   return true;

}
int minimum_page(int arr[], int n,int m)
{
    int start=arr[0],end=0,sum=0,ans=-1;
    for(int i=0;i<n;i++)
    {
      end+=arr[i];
      if(start>arr[i])
      start=arr[i];
    }
    while(start<=end)
    {
        int mid=start+(end - start)/2;
        if(ispossible(arr,n,m,mid))
        {
          ans=mid;
          end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }

    return ans;
}
int main()
{
    int arr[4]={12 ,34 ,67 ,90};
    cout<<minimum_page(arr,4,2);
    
    return 0;
}