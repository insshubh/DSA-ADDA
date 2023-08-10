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

    return val+sum(val-1);
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

int main()
{
    int num;
    // cout<<factorial(5);
    //cout<<power_of(3,2);
    //n_1_print(10);
    //one_n_print(10);
   //cout<< pallindrome(1321,0,1321);
   //cout<<sum_digit(12345);
    return 0;
}