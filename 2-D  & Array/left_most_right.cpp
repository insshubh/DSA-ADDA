#include<bits/stdc++.h>
using namespace std;
int left_right_index(int arr[], int s, int key)
{
  int left_i=-1,right_i=-1,start=0,end=s-1,mid;
  while(start<=end)
  {
    mid=end+(start-end)/2;
    if(arr[mid]==key)
    {
        left_i=mid;
        end=mid-1;
    }
    else if(arr[mid]>key)
    {
        end=mid-1;
    }
    else
        start=mid+1;
  }

  start=0,end=s-1;

  while(start<=end)
  {
    mid=end+(start-end)/2;
    if(arr[mid]==key)
    {
        right_i=mid;
        start=mid+1;
    }
    else if(arr[mid]>key)
    {
        end=mid-1;
    }
    else
        start=mid+1;
  }
  

  return left_i;
  
}
int main()
{
    int arr[5]= {1,2,2,2,3};
    cout<<left_right_index(arr,5,2);
    
    return 0;
}