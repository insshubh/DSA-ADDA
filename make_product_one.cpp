#include<bits/stdc++.h>
using namespace std;
void steps_one(int arr[], int s)
{
    int steps= 0,mul=1,no_zer=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]>0)
        {
            steps+=(arr[i]-1);
        }
        
        else if(arr[i]<0)
        {
            steps+=(-1-(arr[i]));
            mul=mul*-1;
        }
        else{
            no_zer++;
            steps++;
        }
    }
    if(mul==1 || no_zer>0)
    cout<<steps;
    else
        cout<<steps+2;
}
int main()
{
    int arr[5] ={1,3,5,-1,2};
    steps_one(arr,5);

    return 0;
}