#include <bits/stdc++.h>
using namespace std;
// this program is used 
int duplicate(int arr[],int n)
{
   int ar[n]={0};
   int flag = true;
   for(int i=0;i<n;i++)
   {
      int index=arr[i];
      ar[index]++;
   }
   for(int i = 0;i<n;i++)
   {
      if(ar[i]>1)
      {
         cout<<i<<" ";
         flag=false;
      }
      
   }
   if(flag==true)
   {
      return -1;
   }
   

   
}
int main()
{
   int arr[3] = {1, 2, 3};
   cout<<duplicate(arr, 3);

   return 0;
}