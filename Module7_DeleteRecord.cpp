// Module 7. Write a C++ program to delete a record.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string items[3] = {"ID Card", "Wallet", "Keys"};
    int position;

    cout << "===== Lost & Found Records =====\n";

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << items[i] << endl;
    }

    cout << "\nEnter record number to delete: ";
    cin >> position;

    if (position >= 1 && position <= 3)
    {
        for (int i = position - 1; i < 2; i++)
        {
            items[i] = items[i + 1];
        }

        cout << "\nRecord Deleted Successfully!";

        cout << "\n\nRemaining Records:\n";

        for (int i = 0; i < 2; i++)
        {
            if (items[i] != "")
                cout << items[i] << endl;
        }
    }
    else
    {
        cout << "\nInvalid Record Number!";
    }

    return 0;
}

// Output:
// ===== Lost & Found Records =====
// 1. ID Card
// 2. Wallet
// 3. Keys
//
// Enter record number to delete: 2
//
// Record Deleted Successfully!
//
// Remaining Records:
// ID Card
// Keys
