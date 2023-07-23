#include<bits/stdc++.h>
using namespace std;
int minimum_no_bs(int arr[], int s)
{
    int start=0,end=s-1,index;
    while (start<=end)
    {
        int mid= start+(end-start)/2;
        if(arr[mid]==mid)
        {
            start=mid+1;
            index=mid+1;
        }
        else{
            end=mid-1;
            index=mid;
        }
    }

    return index;
    
}
int main()
{
    int arr[5]={0,1,2,3,5};
    cout<<minimum_no_bs(arr,5);
    return 0;
}