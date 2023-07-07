#include<bits/stdc++.h>
using namespace std;
int sub_array_sum(int arr[], int n,int key)
{
   int low=0, high=0,curr_sum=0;
  while(high<n)
  {
     if(curr_sum==key)
     {
       cout<<low<<" "<<high;
       return 1;
    
     }
    
   else if(curr_sum<key)
    {
       high++;
      curr_sum+=arr[high];
     
    }
    else
    {
      curr_sum-=arr[low];
      low++;
    }
   
    
  }
  return -1;
  
}
int main()
{
    int arr[5] = {1,3,3,5,7};
    sub_array_sum(arr,5,4);
    return 0;
}




