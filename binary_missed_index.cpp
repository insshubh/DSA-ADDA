#include<bits/stdc++.h>
using namespace std;
int binary_missed(int arr[], int s,int key)
{
    int low=0,high=s-1,mid;
    int index=-1;
    while(low<=high)
    {
        mid=high+(low-high)/2;
        if(arr[mid]==key)
         return mid;

         else if(arr[mid]>key)
         {
            high=mid -1;
            index=mid;
         }
         else
            low=mid+1;
            index=mid+1;
         
    }
    return index;
}
int main()
{
    int arr[5] ={1,2,4,5,6};
    cout<<binary_missed(arr,5,3);
    return 0;
}