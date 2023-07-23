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
void print_diagonalway(int arr[][3],int col,int row)
{
    /*
    1 2 3 
    4 5 6
    7 8 9     ->> 1 ,{2 ,4} ,{3 ,5, 7 },{6,8} ,9:: 
    */

    for(int j=0;j<col;j++)
    {
        int i=0;
        int s=j;
        while(s>=0)
        {
            cout<<arr[i][s]<<" ";
            i+=1;
            s-=1;
        }
        
        

    }

     for(int i=1;i<col;i++)
    {
        int j=col-1;
        int s=i;
        while(s<=col-1)
        {
            cout<<arr[s][j]<<" ";
            j-=1;
            s+=1;
        }
        
        

    }
  
   
}
void bSin2d(int arr[][3],int n,int col,int key)
{
    int start = 0;
    int end = (n*col)-1;
    while(start<=end)
    {
        int mid = start +(end-start)/2;
        int r_inx = (mid/col);
        int c_inx = (mid%col);

        if(arr[r_inx][c_inx]==key)
        {
            cout<<"Value is at "<<r_inx<<" "<<c_inx<<" index ";
            return ;
        }
        else if(arr[r_inx][c_inx]<mid)
        {
            end = mid-1;

        }
        else{
            start = mid +1;
        }
    }

    cout<<" Not Found ";
}
void search_both_side_sort(int arr[][3],int row,int col,int key)
{
    /*
     1 2 3
     5 7 9  -
     8 9 10
    */
    int i=row-1;
    int j =0;
    while(i>=0 && j<col)
    {
        if(arr[i][j]==key)
        {
            cout<<" Value at "<<i<<" "<<j<<" index";
            return ;
        }
        else if(arr[i][j]<key)
        {
            j++;
        }
        else{
            i--;
        }
    }
    cout<<" Value not Found ";

}
int count_zero(int arr[][3],int n,int m)
{
    // two pointer fix on either [0][m] || [n][0]
    int i =0,j=n-1;
    int sum =0;
    while(i>=0 && j>=0)
    {
       if(arr[i][j]==0)
       {
        sum+=j+1;
        i++;

       }
       else{
        j--;
       }
    }
    return sum;
}
int main()
{
    int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 1, 1}};

    //display(3, 3, arr);
    // max_in2d(arr, 3, 3);
    // transpose_2d(arr,3,3);
    //flip_o2D(arr, 5, 5);
    // rotate_by90(arr,3,3);
    cout << endl;
    // print_diagonalway(arr,3,3);
    //bSin2d(arr,3,3,9);
    //search_both_side_sort(arr,3,3,99);
    cout<<count_zero(arr,3,3);




    return 0;
}