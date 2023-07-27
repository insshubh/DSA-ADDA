#include <bits/stdc++.h>
using namespace std;

// Pointer are used to store the address of an memeory location . Benefits of pointers is inplace Data manupulation.

int double_the_val(int &p)
{
    return 2 * p;
}
void double_the_aray(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        // p[i]=2*p[i]; // we can also write as --|
        *p *= 2;
        p++;
    }
}
void double_the_2daray(int (*p)[2], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            p[i][j] = 2 * (p[i][j]);
        }
    }
}

int main()
{

    //---->> dynamically allocation of memory in Heap .

    int *s = new int;
    *s = 10;
    cout << s << endl; // output --> 10;
    delete (s);
    s = nullptr; // This is the write way to do things.
    cout << *s;

    int a = 10;
    int *p = &a;
    *p = 20;
    cout << a << " " << &p << " " << *p << " " << p << " " << &a; // output -->> 20 0x61fef8 20 0x61fefc 0x61fefc .
    cout << double_the_val(a);

    // --->> Array

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    double_the_aray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // -->> 2D array with pointers;

    int arr[2][2] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    double_the_2daray(arr, 2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // -->> Dynamically allocated 1-D Array
    int *p = new int[10];

    //-->> Dynamically allocated 2-D Array

    int **p = new int *[5]; /*        **p means p is a pointer which points to the address of pointer of int type
                                      *[5] means an array which consist of pointers of int type .
                                ---------
                                |pointer|------>  |array of size 5|
                                |pointer|------>  |array of size 5|
                                |pointer|------>  |array of size 5|
                                |pointer|------>  |array of size 5|
                                ---------
                                                          */

    return 0;
}