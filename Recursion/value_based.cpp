#include<bits/stdc++.h>
using namespace std;
int factorial(int n,int res)
{
    if(n==1)
    return 1;
   
   res=res*n;
   factorial(n-1,res);
   return res;
   
     
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
    n_1_print(n-1);
}
int one_n_print(int n)
{
    if(n==0)
    return 1;

    one_n_print(n-1);
    cout<<n<<" ";
    
    
}
int sum(int val)
{
    if(val==1)
    return 1;

    int res = val+sum(val-1);
    return res;
}
bool pallindrome(int num,int temp,int numc)
{
    if(numc<=0)
    return temp==num;
    
    
    int ld = num%10;
    temp=temp*10+ld;
    return pallindrome(num,temp,numc/10);

}
int sum_digit(int num)
{
    if(num==0)
    {
        return 0;
    }
    int ld = num%10;
    return ld+sum_digit(num/10);
}
int sum_ofdigit(int num)
{
    if(num==0)
    return 0;

    int ld = num%10;
    return ld + sum_ofdigit(num/10);
}
int reverse_num(int num,int temp)
{
    if(num==0)
    return temp;
   
   int ld = num%10;
    temp = temp*10+ld;
   return reverse_num(num/10,temp);
    
}
int helper(int n,int c)
{
   if(n==0)
   return c;

   else if(n%2==0)
   return helper(n/2,c+1);
   else
   return helper(n-1,c+1);
}
int count_steps(int num)
{

    return helper(num,0);
}

int main()
{
    int num;
    // cout<<factorial(5);
    //cout<<power_of(3,2);
    //n_1_print(10);
    //one_n_print(10);
   //cout<< pallindrome(1321,0,1321);
   //cout<<factorial(4,1);
   //cout<<reverse_num(100023,0);
   cout<<count_steps(14);
    return 0;
}