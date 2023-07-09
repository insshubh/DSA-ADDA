#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main()
{
    int arr[8]={12,5,3,8,1,3,9,9};
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   
   for(int k=0;k<8;k++)
   {
    cout<<arr[k]<<" ";
   }
   
    return 0;
}