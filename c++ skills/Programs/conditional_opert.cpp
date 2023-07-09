#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    bool is_evena=(a%2==0);
     bool is_evenb=(b%2==0);

     if(is_evena && is_evenb)
     {
        cout<<a/b;
     }
     else if(is_evena && !is_evenb )
     {
        cout<<a+b;
     }
     else if(is_evenb && !is_evena)
     {
        cout<<a-b;
     }
     else{
        cout<<a*b;
     }
    return 0;
}