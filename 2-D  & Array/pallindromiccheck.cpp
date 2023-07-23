#include<bits/stdc++.h>
using namespace std;
int pallind(int arr[], int n)
{
    for(int i= 0;i<n;i++)
    {
        int temp = arr[i];
        int sum =0;
        while(temp)
        {
            int ld = temp%10;
             sum = sum*10 + ld;
            temp = temp/10;
        }
         if(sum!=arr[i])
         return 0;
    }
    return 1;
}
int main()
{
    int arr[5] ={11,12,454,343,1};
    cout<<pallind(arr,5);
    
    return 0;
    
}