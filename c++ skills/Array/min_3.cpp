#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 4, 2, 7, 8, 3, 5, 7, 8, 5};
    int min = INT16_MAX;
    int min2 = INT16_MAX;
    int min3 = INT16_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min3 = min2;
            min2 = min;
            min = arr[i];
        }
        else if (arr[i] < min2)
        {
            min3 = min2;
            min2 = arr[i];
        }
        else if (arr[i] < min3)
        {

            min3 = arr[i];
        }
    }
    cout << min << " " << min2 << " " << min3;

    return 0;
}