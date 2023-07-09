#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the value"<<endl;
    cin>>num;
    if(num%2==0 && num<1000)
    {
        cout<<(num%10);
    }
    else if(num%2!=0 && num<1000)
    {
        cout<<( num%100);
        
    }
    else if(num>1000 && num<10000)
    {
        cout<<(num%1000);
    }
    else{
        cout<<(-num);
    }
    
    return 0;
}