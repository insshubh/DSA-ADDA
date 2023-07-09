#include<bits/stdc++.h>
using namespace std;
// A rope of length n ,we have given pieces of rope a rope b rope c we have to check the combination and maximum no ropes required .

int rope_cut(int n ,int a,int b,int c)
{
    if(n==0)
    return 1;
    if(n<0)
    return -1;

    int res=max(rope_cut(n-a,a,b,c), rope_cut(n-b,a,b,c),rope_cut(n-c,a,b,c));
    if(res==-1)
    {
        return -1;
    }
    else
     return res+1;
}
int main()
{
    cout<<rope_cut(9,2,2,2);
    return 0;
}