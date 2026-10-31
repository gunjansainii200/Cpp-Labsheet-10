// Module 10. Write a C++ program to exit from the Lost & Found Management System.

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Lost & Found Management System =====";
    cout << "\n1. Continue";
    cout << "\n2. Exit";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 2)
    {
        cout << "\nThank you for using the system!";
        cout << "\nExiting Successfully...";
    }
    else if (choice == 1)
    {
        cout << "\nWelcome Back!";
    }
    else
    {
        cout << "\nInvalid Choice!";
    }

    return 0;
}

// Output:
// ===== Lost & Found Management System =====
// 1. Continue
// 2. Exit
// Enter your choice: 2
//
// Thank you for using the system!
// Exiting Successfully...
