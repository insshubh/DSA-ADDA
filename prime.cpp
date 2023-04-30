#include <bits/stdc++.h>
using namespace std;

int main()
{
    // to check for the Prime no

    int num;
    // Taking input from the User .
    cout << "Enter the number :" << endl;
    cin >> num;

    // Handling the Value less than 2
    if (num < 2){
        cout << num << " is not a Prime number";
        return 0;
    }
  
    int Flag = 0;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not Prime number";
            return 0;
        }
    }
    if (Flag == 0)
        cout << num << " is Prime number";
    

    return 0;
}

/*
Dekh bhai kch krna ni h ek no lo agar no 2 se choota h to wo prime ni h agar 2 ya 2usse jyada h to h agar given no ke half se kisise wo divide hua to prime ni h bs simple h */