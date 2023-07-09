#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int var,temp=0;
    int sum=0;
    cout<<"Enter the test"<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"Enter the num"<<endl;
        cin>>n;
        int count=1;
        for(int j=0;j<n;j++)
        {
            cin>>var;
            temp=pow(var,count);
            count++;
            sum+=temp;
            
        }
        cout<<"The sum is :"<<sum;
        sum=0;
    }
    
    return 0;
}