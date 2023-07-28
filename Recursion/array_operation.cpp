#include<bits/stdc++.h>
using namespace std;
//Printing array element through Recursion
void print_arr(const int *a,int size)    // output --> 5 4 3 2 1
{
    if(size==0)
    return ;
    cout<<a[size-1]<<" ";
    print_arr(a,size-1);
}
int sum_arr(int *a,int size,int sum)    // output --> 15 for arr 1 2 3 4 5
{

    if(size<0)
    {
        return sum;
    } 
    sum+=a[0];                        //   sum+= a[0] --> Each time a+1 is incremented and size is decrement then a+1 becomes 0 index.
    return sum_arr(a+1,size-1,sum);  // Why a+1  because a is pointing to 1 now it moves to 2.

}
int linear_search(int *a,int size,int key)
{
    
    if(size==0)
    return 0;

    if(*a==key)
    return 1;

    linear_search(a+1,size-1,key);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    //print_arr(arr,5);
    // int sum=0;
    // sum=sum_arr(arr,5,sum);
    // cout<<sum;
    cout<<linear_search(arr,5,2);
    
    
    return 0;
}