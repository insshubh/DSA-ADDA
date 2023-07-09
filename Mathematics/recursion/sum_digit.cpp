#include <bits/stdc++.h>
using namespace std;
int sum_digit(int n)
{

    if (n == 0)
        return 0;
    else

        return sum_digit(n / 10) + n % 10;
    
}
int main()
{
    cout << sum_digit(9987);
    return 0;
}