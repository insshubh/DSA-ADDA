#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;
    int occur[10]={0};
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>num;
        if(num==0)
        {
            occur[num]++;
        }

        while(num)
        {
            int ld=num%10;
            occur[ld]++;
            num=num/10;
        }
    }
        for(int i=0;i<10;i++)
        {
            cout<<occur[i]<<" ";
        }

    return 0;
}