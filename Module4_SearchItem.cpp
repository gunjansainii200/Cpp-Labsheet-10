// Module 4. Write a C++ program to search an item.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string items[3] = {"ID Card", "Wallet", "Keys"};
    string searchItem;
    bool found = false;

    cout << "Enter item name to search: ";
    getline(cin, searchItem);

    for (int i = 0; i < 3; i++)
    {
        if (items[i] == searchItem)
        {
            found = true;
            cout << "\nItem Found Successfully!";
            cout << "\nItem Name: " << items[i];
            break;
        }
    }

    if (!found)
    {
        cout << "\nItem Not Found!";
    }

    return 0;
}

// Output:
// Enter item name to search: Wallet
//
// Item Found Successfully!
// Item Name: Wallet
