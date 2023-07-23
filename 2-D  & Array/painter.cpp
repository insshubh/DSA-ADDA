#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int k,int mid)
    {
        int painter_count=1, paint_done=0;
        for(int i=0;i<n;i++)
        {
            if(paint_done+arr[i]<=mid)
            {
                paint_done+=arr[i];
            }
            else
            {
                painter_count++;
                if(painter_count>k || arr[i]>mid)
                return false;
                
            
                paint_done=arr[i];
            }
        }
        return true;
    }

    long long minTime(int arr[], int n, int k)
    {
        // code here
        int start=arr[0],end;
        long long ans=-1;
        for(int i= 0;i<n;i++)
        {
            end+=arr[i];
            if(start<=arr[i])
            start=arr[i];
        }
        
        while(start<=end)
        {
            int mid = start+(end- start)/2;
            if(ispossible(arr,n,k,mid))
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
        // return minimum time
    }
int main()
{
   int arr[8]={4, 2 ,22, 8, 2, 11, 19, 13};
   cout<<minTime(arr,8,3);
    
    
    return 0;
}