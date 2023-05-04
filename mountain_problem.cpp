#include<bits/stdc++.h>
using namespace std;
int mountain_peek_element(int arr[], int s)
{
    int start=0, end= s-1,mid;
    while(start<=end)
    {
        mid=end+(start- end)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        return mid;

        else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        end=mid-1;
    }
    
}
int main()
{
    int arr[10]={1,2,10,6,5,4,3,2,1};
   cout<< mountain_peek_element(arr,10);
    return 0;
}