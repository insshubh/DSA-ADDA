#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
           if(year%400==0)
           {
            cout<<"Leap";
           }
        } else {
            cout<<"Leap";
        }
    }else {
        cout<<"NOT ";
    }
    return 0;
}