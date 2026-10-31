// Module 6. Write a C++ program to view all lost and found records.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string items[3] = {"ID Card", "Wallet", "Keys"};
    string status[3] = {"Lost", "Found", "Lost"};

    cout << "===== All Lost & Found Records =====\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nRecord " << i + 1;
        cout << "\nItem Name: " << items[i];
        cout << "\nStatus: " << status[i] << endl;
    }

    return 0;
}

// Output:
// ===== All Lost & Found Records =====
//
// Record 1
// Item Name: ID Card
// Status: Lost
//
// Record 2
// Item Name: Wallet
// Status: Found
//
// Record 3
// Item Name: Keys
// Status: Lost
