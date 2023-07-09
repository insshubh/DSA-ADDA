#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    start :
    if(n==0)
    return ;
    //for n to 1 we reverse the order of print function and cout statement..
    
    cout<<n<<" ";
    n=n-1;
    //conversion of trail recursive function into non recursive function not extra auxilary space no overheads..
    goto start;
}
int main()
{
    print(10);
    return 0;
}