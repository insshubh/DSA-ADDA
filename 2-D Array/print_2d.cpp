#include <bits/stdc++.h>
using namespace std;
void display(int m, int n, int arr[][3])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void max_in2d(int arr[][3], int n, int m)
{
    int ma = -1;
    for (int i = 0; i < n; i++)
    {
        ma = -1;
        for (int j = 0; j < m; j++)
        {
            ma = max(ma, arr[i][j]);
        }
        cout << " Maximum of each Row is " << ma << " " << endl;
    }
    cout << " Maximum of Array is " << ma << endl;
}
void transpose_2d(int arr[][3], int n, int m)
{
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void flip_o2D(int arr[][5], int row, int m)
{
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap(arr[i][j], arr[row - i - 1][j]);
        }
    }
}
void rotate_by90(int arr[][3], int n, int m)
{
/*
  1 2 3             7 4 1       00 01 02
  4 5 6   90* -->   8 5 2  -->  10 11 12
  7 8 9             9 6 3       20 21 22
*/

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        {
            swap(arr[i][j], arr[i][m-j-1]);
        }
    }
}




int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    display(3, 3, arr);
    // max_in2d(arr, 3, 3);
    // transpose_2d(arr,3,3);
    //flip_o2D(arr, 5, 5);
    rotate_by90(arr,3,3);
    cout << endl;
    display(3, 3, arr);

    return 0;
}