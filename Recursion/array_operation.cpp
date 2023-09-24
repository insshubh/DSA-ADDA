#include <bits/stdc++.h>
using namespace std;
// Printing array element through Recursion
void print_arr(const int *a, int size) // output --> 5 4 3 2 1
{
    if (size == 0)
        return;
    cout << a[size - 1] << " ";
    print_arr(a, size - 1);
}
int sum_arr(int *a, int size, int sum) // output --> 15 for arr 1 2 3 4 5
{

    if (size < 0)
    {
        return sum;
    }
    sum += a[0];                          //   sum+= a[0] --> Each time a+1 is incremented and size is decrement then a+1 becomes 0 index.
    return sum_arr(a + 1, size - 1, sum); // Why a+1  because a is pointing to 1 now it moves to 2.
}
int linear_search(int *a, int size, int key)
{

    if (size == 0)
        return 0;

    if (*a == key)
        return 1;

    linear_search(a + 1, size - 1, key);
}
int binary_search(int *a, int start, int end, int key)
{
    if (end < start)
        return 0;
    int mid = start + (end - start) / 2;
    if (a[mid] == key)
        return mid;
    else if (a[mid] > key)
    {
        return binary_search(a, start, mid - 1, key);
    }
    else
    {
        return binary_search(a, mid + 1, end, key);
    }
}
bool pallindrome(string s, int b, int e)
{
    if (b >= e)
        return true;

    if (s[b] != s[e])
        return false;

    return pallindrome(s, b + 1, e - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // print_arr(arr,5);
    //  int sum=0;
    //  sum=sum_arr(arr,5,sum);
    //  cout<<sum;
    // cout<<linear_search(arr,5,2);
    // cout<<binary_search(arr,0,4,7);
    // string s= "sols";
    // cout<< pallindrome(s,0,s.size()-1);

    return 0;
}