#include<bits/stdc++.h>
using namespace std;
void rotateBy1(int arr[],int n)
{
    int ans = arr[0];
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        arr[i-1]=temp;
    }
    arr[n-1]=ans;
}

void rotateByd(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        int temp = arr[i];
        arr[i]=arr[d-i];
        arr[d-i]=temp;
    }
   
   for(int i=0;i<n/2;i++)
   {
    int temp = arr[i];
    arr[i]=arr[n-i];
    arr[n-i]=temp;
   }
   for(int i=0;i<n-d;i++)
   {
    int temp = arr[i];
    arr[i]=arr[n-d-i];
    arr[n-d-i]=temp;
   }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5] ={1,2,3,4,5};
    //rotateBy1(arr,5);
    //display(arr,5);
    rotateByd(arr,5,2);
    display(arr,5);

    
    return 0;
}