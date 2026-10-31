// Module 1. Write a C++ program for Student Login.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    string correctUsername = "student123";
    string correctPassword = "12345";

    cout << "Enter student username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword)
    {
        cout << "\nLogin Successful!";
        cout << "\nWelcome to Lost & Found Management System.";
    }
    else
    {
        cout << "\nInvalid username or password.";
    }

    return 0;
}

// Output:
// Enter student username: student123
// Enter password: 12345
//
// Login Successful!
// Welcome to Lost & Found Management System.
