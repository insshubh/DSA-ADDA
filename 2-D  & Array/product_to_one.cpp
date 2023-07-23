#include<bits/stdc++.h>
using namespace std;
int makeProductOne(int arr[], int N) {
        // code here
        int neg = 0;
        int steps = 0, count_zero=0;
        for(int i=0;i<N;i++)
        {
            
            
            if(arr[i]>0)
            {
                 steps+=arr[i]-1;
                 
            }
           
            
            else if(arr[i]<0)
            {
             steps+=-(arr[i]+1);
             neg++;
            }
             
            else
            {
            count_zero++;
            steps++;
            }
            
        }
        if(neg%2==0)
        {
            return steps;
        }
        else
        return steps+2;
        
        
    }
int main()
{
    // Write your Example here
    int arr[5]={5,4,3,2,1};
    for(int i =0;i<5-1;i++)
    {
      for(int j = 4-i;j>=0;j--)
      {
        if(arr[j]>arr[j-1])
        {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
      }
    }

    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}