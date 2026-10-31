// Module 8. Write a C++ program to display item statistics.

#include <iostream>
using namespace std;

int main()
{
    string status[5] = {"Lost", "Found", "Lost", "Found", "Lost"};

    int lost = 0, found = 0;

    for (int i = 0; i < 5; i++)
    {
        if (status[i] == "Lost")
        {
            lost++;
        }
        else if (status[i] == "Found")
        {
            found++;
        }
    }

    cout << "===== Item Statistics =====";
    cout << "\nTotal Lost Items: " << lost;
    cout << "\nTotal Found Items: " << found;
    cout << "\nTotal Items: " << lost + found;

    return 0;
}

// Output:
// ===== Item Statistics =====
// Total Lost Items: 3
// Total Found Items: 2
// Total Items: 5
