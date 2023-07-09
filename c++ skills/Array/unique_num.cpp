#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter the number ";
    //     cin >> num;
    //    int temp;
    //     if (num != temp)
    //     {
    //           temp = num;
    //         cout << num <<endl;
    //     }
    //     else{
    //         temp=num;
    //     }
    // }

  int arr[6]={1,1,2,3,2,2};
  int last=INT16_MIN;
  for(int i=1;i<6;i++)
  {
    if(arr[i]!=last)
    {
        cout<<arr[i]<<" ";
        last=arr[i];
    }
  }






    return 0;
}