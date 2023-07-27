#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1)
    return 1;

    return n*factorial(n-1);
}
int power_of(int n,int m)
{
    if(m==1)                        
    return n;
    
    return n*power_of(n,m-1);
}
int n_1_print(int n)
{
    if(n==0)
    return 1;

    cout<<n<<" ";
    return n_1_print(n-1);
}
int one_n_print(int n)
{
    if(n==0)
    return 1;
    int num = n;
    return one_n_print(n-1);
    cout<<num<<" ";
    
}
int main()
{
    int num;
    // cout<<factorial(5);
    //cout<<power_of(3,2);
    //n_1_print(10);
    one_n_print(10);
    return 0;
}