#include<bits/stdc++.h>
using namespace std;
int equilibrium(int arr[], int s)
{
    int left_sum=0,right_sum=0;
    for(int i=0;i<s;i++)
    {
        right_sum+=arr[i];
    }

    for(int i=0;i<s;i++)
    {
         
        right_sum-=arr[i];
        if(left_sum==right_sum)
         return i+1;
        left_sum+=arr[i];
    }

}
int main()
{
    int arr[5] ={5,3,3,2};
    // Equlibrium means that point where sum to left is equal to sum to right
   cout<<  equilibrium(arr,5);
    return 0;
}