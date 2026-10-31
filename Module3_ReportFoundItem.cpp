// Module 3. Write a C++ program to report a found item.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentName, itemName, location;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter found item name: ";
    getline(cin, itemName);

    cout << "Enter found location: ";
    getline(cin, location);

    cout << "\nFound Item Reported Successfully!";
    cout << "\nStudent Name: " << studentName;
    cout << "\nItem Name: " << itemName;
    cout << "\nFound Location: " << location;

    return 0;
}

// Output:
// Enter student name: Rahul
// Enter found item name: Wallet
// Enter found location: Canteen
//
// Found Item Reported Successfully!
// Student Name: Rahul
// Item Name: Wallet
// Found Location: Canteen
