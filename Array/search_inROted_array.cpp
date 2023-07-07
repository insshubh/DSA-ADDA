#include<bits/stdc++.h>
using namespace std;
// this is a program for finding the k rotation in sorted and rotated array,
int k_val_insR(int arr[], int s)
{
    int pivot = arr[0];
    int start = 0, end = s-1;
    int index;
    while(start<=end)
    {
        int mid = start+(end- start)/2;

        if(arr[mid]<pivot)
        {
          end=mid-1;
          index=mid;
        }
        else
        {
            start=mid+1;
            index=mid+1;
        }
    }
     if(index==s)
     {
        return 0;
     }
     else
    return index;
}
int main()
{

    int arr[5]={0,1,2,3,4};
    cout<<k_val_insR(arr,5);
    
    return 0;
}