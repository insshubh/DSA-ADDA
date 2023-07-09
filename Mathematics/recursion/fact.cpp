#include<bits/stdc++.h>
using namespace std;
int factorial(int n,int k)
{
    // this is tail recursive function..
    start :
    if(n==0 || n==1)
    {
        return k;
    }
    //return factorial(n-1,n*k);
    
    k=k*n;
    n=n-1;
    
    goto start;
}
int main()
{
    cout<<factorial(5,1);
    return 0;
}