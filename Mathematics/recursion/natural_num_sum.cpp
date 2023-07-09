#include<bits/stdc++.h>
using namespace std;
int sum_num(int n,int k)
{
    start :
    if( n==0)
    return k;
    k=k+n;
    n=n-1;
    goto start;
    


}
int main()
{
    cout<<sum_num(2,0);
    return 0;
}