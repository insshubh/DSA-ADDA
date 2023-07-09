#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    int x;
    cout<<"Enter the the x val"<<endl;
    cin>>x;
    int a,s1;
    cout<<"Enter the first range"<<endl;
    cin>>a>>s1;
    int b,s2;
    cout<<"Enter the second range"<<endl;
    cin>>b>>s2;
    int c,s3;
    cout<<"Enter the third range"<<endl;
    cin>>b>>s3;

    if(x>a && x<s1)
    {
       count++; 
    }
    if(x>b  && x<s2)
    {
        count++;
    }  
    if(x>c && x<s3)
    {
        count++;
    }
    cout<<count;
    return 0;
}