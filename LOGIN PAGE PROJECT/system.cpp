#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    int choice_val;

    const string ANSI_BOLD = "\033[1m";
    const string ANSI_RESET = "\033[0m";
    system("cls");
    // Page Look
     cout << ANSI_BOLD << "                                        o   o " << ANSI_RESET<<endl;
     cout << ANSI_BOLD << "                                          |   " << ANSI_RESET<<endl;
     cout << ANSI_BOLD << "                                         \\_/  " << ANSI_RESET<<endl;


    cout << ANSI_BOLD << endl
         << endl
         << endl;
    cout << ANSI_BOLD << "                 LOGIN PAGE                " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "-------------------------------------------" << ANSI_RESET << endl
         << endl;
    cout << ANSI_BOLD << " __________________________________________" << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|__________________________________________|" << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|               1. Register                | " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|                                          | " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|               2. Login                   | " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|                                          | " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|               3. Testimonial             | " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|                                          | " << ANSI_RESET << endl;
    cout << ANSI_BOLD << "|__________________________________________| " << ANSI_RESET << endl;
    cout<<endl<<endl;
    cout << ANSI_BOLD << "Enter Your Choice" << ANSI_RESET<<endl;
    cin>>choice_val;
    switch (choice_val)
    {
    case 1:
     cout<<"------------------------------------------------------"<<endl<<endl;
     cout<<"                ";
     break;
    
    default:
     break;
    }




    return 0;
}
