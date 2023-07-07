#include <bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)
{
    // code here
    int arr[m + n];
    for (int i = 0; i < n; i++)
        arr[i] = a[i];
    for (int i = n; i < m + n; i++)
        arr[i] = b[i - n];
    sort(arr, arr + (m + n));
    int ans = 0;
    for (int i = 0; i < m + n; i++)
    {
        if (arr[i] == arr[i + 1])
            continue;
        else
            ans++;
    }
    return ans;
}
int main()
{
    int arr[5]{1, 4, 5, 6, 7};
    int ar[3]{1, 6, 8};
    cout << doUnion(arr, 5, ar, 3);

    return 0;
}