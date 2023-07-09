#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the";
    cin>>n;
    // string s;
    // while(n>0)
    // {
    //     cin>>s;
    //     n--;
    
    // }
    // for(int i=0;i<2;i++)
    // {
    //     if(s[i]=='n' && s[i+1]=='o' || s[i]=='o' && s[i+1]=='n')
    //     {
    //         cout<<s[i]<<s[i+1]<<" ";
    //     }
    // }

    //Reversing the numbers
    // int temp;
    // while(n>0)
    // {
    //     int ld=n%10;
    //     n=n/10;
    //     temp=temp*10+ld;
    // }
    // cout<<temp;
    

    // for multiplication table
    int N=1;
    int l=n*m;
    for(int i=0;i<n;i++)
    {
        int M=1;
        for(int j=1;j<=m;j++)
        {
            cout<<j*M<<" ";
            M++;
        }
        
        
    }
    
    return 0;
}