#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   int res=-1;
   if(a<100 && a>=res)
   {
    res=a;
   }
   if(b<100 && b>=res)
   {
    res=b;
   }
   if(c<100 && c>=res)
   {
    res=c;
   }

   cout<<res;
    return 0;
}