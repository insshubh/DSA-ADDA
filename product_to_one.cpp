#include<bits/stdc++.h>
using namespace std;
int makeProductOne(int arr[], int N) {
        // code here
        int mul = 1;
        int steps = 0, count_zero=0;
        for(int i=0;i<N;i++)
        {
            
            
            if(arr[i]>0)
            {
                 steps+=arr[i]-1;
                 mul=mul*1;
            }
           
            
            else if(arr[i]<0)
            {
             steps+=-(arr[i]+1);
             mul=mul*-1;
            }
             
            else
            {
            count_zero++;
            steps++;
            }
            
        }
        if(mul==1 || count_zero>0)
        {
            return steps;
        }
        else
        return steps+2;
        
        
    }
int main()
{
    // Write your Example here
    return 0;
}