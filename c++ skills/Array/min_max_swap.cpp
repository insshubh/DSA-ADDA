#include<bits/stdc++.h>
using namespace std;
void print(int arr[] ,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={-1,10,1,-1,10};
    int min=arr[0];
    int max=INT16_MIN;
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
           min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"MIN :"<<min<<" "<<"Max :"<<max;
    for(int j=0;j<5;j++)
    {
        if(arr[j]==max)
        {
           arr[j]=min;
        }
        else if(arr[j]==min)
        {
            arr[j]=max;
        }
    }
    cout<<endl;
    print(arr,5);

    
    return 0;
}