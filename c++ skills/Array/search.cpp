#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int qur[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the querry";
        cin >> qur[i];
        int target = qur[i];
        bool flag =true;
        for (int j = 0; j < 5; j++)
        {

            if (arr[j]==target)
            {
                cout << j<<" ";
            }
            
            
        }
         cout<<"-1";
       
    }
   

    return 0;
}