#include <bits/stdc++.h>
using namespace std;
// Naive approach simple calling the rot_1 d times..

void l_oT(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}

void rot(int arr[], int size, int d)
{

    for (int i = 0; i < d; i++)
    {
        l_oT(arr, size);
    }
}

// Another effective approach in n complexity  this required a reverse function..

void revrse_fnc(int arr[] ,int low,int high) 
{
    while(low<=high) {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

// Rotation by D;
void rotati_d(int arr[], int size,int d) {
    revrse_fnc(arr,0,d-1);
    revrse_fnc(arr,d,size-1);
    revrse_fnc(arr,0,size-1);
    }

void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	  
	   reverse(arr,arr+k%n);
	   reverse(arr+k%n,arr+n);
	   reverse(arr,arr+n);
	   }
	   
// check if array is Sorted and Rotated
bool chk_Sort_rot(int arr[],int n)
{
    int count =0;
    for(int i =0;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        count++;
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    return count<=1;
}



void dispalay(int arr[], int si)
{
    for (int i = 0; i < si; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    leftRotate(arr, 6, 12);
    dispalay(arr, 6);

    return 0;
}