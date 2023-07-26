#include<bits/stdc++.h>
using namespace std;
void double_the_val(int *a ,int size) // *a || a[] ye ek pointer h naki array h 
{
    for(int i=0;i<size;i++)
    {
        *a*=2;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    for(int i=0;i<5;i++)
    {
        *p*=2;
        p++;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}