#include <iostream>
using namespace std;
/* 2: Insertion Sort Algorithm to sort the array of integers in increasing order 
if we start from the last element of the array.
 Question was explained in the class.*/
 
int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element" << i + 1 << ": " << endl;

        cin >> arr[i];
    }

     cout << "Array before insertion: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

      for (int i = size - 1; i >= 0; i--) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }


    cout<<"array after insertion in increasing order"<<": " <<endl;

   
   for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
   }
   return 0;

}