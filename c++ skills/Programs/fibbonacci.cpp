#include<bits/stdc++.h>
using namespace std;
 int fibbonaci(int n)
 {
    
   int t1=0;
   int t2=1;
   cout<<t1<<","<<t2<<",";
   
   for(int i=1;i<=n;i++)
   {
    int nextfib=t1+t2;
   cout<<nextfib<<",";
    t1=t2;
    t2=nextfib;
    
   }
    
 }
int main()
{
    fibbonaci(5);
    return 0;
}