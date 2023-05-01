#include<bits/stdc++.h>
using namespace std;
void sorti(int arr[],int n)
{
    int no_zero=0;
    int no_one=0;
    int no_two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            no_zero++;
        }
        else if(arr[i]==1)
        {
           no_one++;
        }
        else if(arr[i]==2)
        {
            no_two++;
        }
    }
        for(int i=0;i<no_zero;i++)
        {
            cout<<"0"<<" ";
        }
        for(int i=0;i<no_one;i++)
        {
            cout<<"1"<<" ";
        }
        for(int i=0;i<no_two;i++)
        {
            cout<<"2"<<" ";
        }

    }

    int main(){
        int arr[5]={1,1,2,2,0};
        sorti(arr,5);
        return 0;
}