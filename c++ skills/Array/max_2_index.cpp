#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Alsop try to give the index and the values ,, it can solove through max and sec max..

    int size=5;
    int arr[size] ={1,2,50,38,9};
    int sum=0;
    int index1=-1;
    int index2=-1;
    for(int i=0;i<size;i++)
    {
       for(int j=0;j<size;j++)
       {
          if(arr[i]+arr[j]>sum)
          {
            sum=arr[i]+arr[j];
          }
       }
        
    }
    
         cout<<sum;


    // int arr[10]= {1,1,2,2,33,1,22,1,2,2};
    //  int count=0;
    //  for(int i=0;i<10;i++)
    //  {
    //     int flag=0;
    //     for(int j=i+1;j<10;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             count++;

    //         }
    //     }
    //     cout<<arr[i]<<" "<<count<<" ";
    //  }
    
    return 0;
}