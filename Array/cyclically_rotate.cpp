#include<bits/stdc++.h>
using namespace std;
void rotate_Arr(int arr[], int s)
{
    int temp = arr[s-1];
    
        for(int i= s-2;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
      arr[0]= temp;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    rotate_Arr(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}