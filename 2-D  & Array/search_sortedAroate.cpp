#include<bits/stdc++.h>
using namespace std;
int sort_rot_arr_src(int arr[],int s, int key)
{
    int start=0,end = s-1,index;
    while(start<=end)
    {
        int mid = start+(end - start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[start]<=arr[mid])
        {
            if(arr[mid]>key && key>=arr[start])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else
        {
            if(arr[mid]>arr[end] && key<=arr[end])
            {
               start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
}
int main()
{
    
    return 0;
}