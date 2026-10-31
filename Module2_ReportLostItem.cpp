// Module 2. Write a C++ program to report a lost item.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentName, itemName, location;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter lost item name: ";
    getline(cin, itemName);

    cout << "Enter lost location: ";
    getline(cin, location);

    cout << "\nLost Item Reported Successfully!";
    cout << "\nStudent Name: " << studentName;
    cout << "\nItem Name: " << itemName;
    cout << "\nLost Location: " << location;

    return 0;
}

// Output:
// Enter student name: Rahul
// Enter lost item name: ID Card
// Enter lost location: Library
//
// Lost Item Reported Successfully!
// Student Name: Rahul
// Item Name: ID Card
// Lost Location: Library
