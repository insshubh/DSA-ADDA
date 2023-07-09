#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] {1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // return 0;

    const int SIZE = 5;
	int numbers[SIZE] { 1, 2, 4, 3, 10 };
 
	int cnt = 0;
 
	for (int i = 1; i < SIZE; ++i) {
		if (numbers[i - 1] < numbers[i] && numbers[i] < numbers[i + 1])
			cnt++;
	}
	cout << cnt << "\n";
}