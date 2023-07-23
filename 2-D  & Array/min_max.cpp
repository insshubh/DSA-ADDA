#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] ={1,5,71,8,9};
    int min=arr[0], max=arr[4];

    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        max=arr[i];
         if(arr[i]<min)
         min=arr[i];
    }
   cout<< min<<max;
    
    return 0;
}