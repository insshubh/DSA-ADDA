#include<bits/stdc++.h>
using namespace std;
void duplicate(int arr[], int s)
{
    int new_Arr[s] ={0};
    
    for(int i=0;i<s;i++)
    {
       new_Arr[arr[i]]++;

    }
   for(int i=0;i<s;i++)
   {
    if(new_Arr[i]>1)
    cout<<i<<" ";
   }
}
int main()
{
    int arr[5]={1,2,2,3,3};
    duplicate(arr,5);
    return 0;
}