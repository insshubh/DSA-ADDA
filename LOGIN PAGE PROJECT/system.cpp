#include <bits/stdc++.h>
#include <fstream>
#include <conio.h>
#include<unordered_map>
using namespace std;
unordered_map<string, string> log_book;
int shift;
int choice_val;

string encryptCaesar(const string& message, int shift);
string decryptCaesar(const string& encryptedMessage, int shift);
bool login(string user, string pass);
void Testimonials(string user);
void message_box();
void loginProcess();
void system_view();

bool login(string user, string pass) {
    if (log_book[user] == pass)
        return true;
    else
        return false;
}

string encryptCaesar(const string& message, int shift) {
    string encryptedMessage = "";

    for (char c : message) {
        if (isalpha(c)) {
            char shiftedChar = c + shift;
            if ((islower(c) && shiftedChar > 'z') || (isupper(c) && shiftedChar > 'Z')) {
                shiftedChar -= 26;
            }
            encryptedMessage += shiftedChar;
        } else {
            encryptedMessage += c;
        }
    }

    return encryptedMessage;
}

string decryptCaesar(const string& encryptedMessage, int shift) {
    return encryptCaesar(encryptedMessage, -shift);
}

void Testimonials(string user) {
    cout << "Welcome, " << user << "! Enjoy our service." << endl;
    message_box();
}

void message_box() {
    int option;
    cout << "1. For Encryption " << endl;
    cout << "2. For Decryption " << endl;
    cin >> option;

    switch (option) {
        case 1: {
            string message;
            cout << "Enter the Message to encrypt: ";
            cin.ignore(); // to clear the buffer
            getline(cin, message);
            cout << "Enter the shift: ";
            cin >> shift;
            string encrypted = encryptCaesar(message, shift);
            cout << "Encrypted Message: " << encrypted << endl;
            break;
        }
        case 2: {
            string encryptedMessage;
            cout << "Enter the Encrypted Message: ";
            cin.ignore(); // to clear the buffer
            getline(cin, encryptedMessage);
            cout << "Enter the shift: ";
            cin >> shift;
            string decrypted = decryptCaesar(encryptedMessage, shift);
            cout << "Decrypted Message: " << decrypted << endl;
            break;
        }
        default:
            cout << "Enter the Correct option " << endl;
            break;
    }
}

void loginProcess() {
    while (true) {
        string user_name;
        string user_password;

        cout << "Enter Your Username: ";
        cin >> user_name;

        cout << "Enter Your Password: ";
        cin >> user_password;

        bool ans = login(user_name, user_password);

        if (ans) {
            cout << "You logged in Successfully" << endl;
            Testimonials(user_name);
            break;
        } else {
            cout << "Enter correct username and Password" << endl;
        }
    }
}
void system_view()
{
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
}
int main()
{
     // List of all Variables // 
    string user_name;
    string user_password;
    bool logged_in = false;

    system_view();

    switch (choice_val) {
        case 1:
            cout << "------------------------------------------------------" << endl << endl;
            cout << " Enter Your Username: ";
            cin >> user_name;
            cout << "Enter Your Password: ";
            cin >> user_password;
            log_book[user_name] = user_password;
            system_view();
            loginProcess();
            break;
        case 2:
            cout << "------------------------------------------------------" << endl << endl;
            loginProcess();
            logged_in = true;
            break;
        case 3:
            if (logged_in == true)
                Testimonials(user_name);
            else
                loginProcess();
            break;
        default:
            cout << "Enter the Correct choice " << endl;
            system_view();
            break;
    }

    return 0;
}

