#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n,int key)
{
  int low=0;
  int high = n-1;
 
  
  while (low<=high)
  {
     int mid = (low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(key<arr[mid])
    {
        high=mid-1;
        
    }
    else{
        low=mid+1;
    
    }
    
  }
  
}
int main()
{
    int arr[5] ={1,2,3,4,5};
    cout<<binary_search(arr,5,4);
    
    return 0;
}