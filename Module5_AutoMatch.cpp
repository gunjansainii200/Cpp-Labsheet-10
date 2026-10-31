// Module 5. Write a C++ program for automatic matching of lost and found items.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string lostItem = "ID Card";
    string foundItem = "ID Card";

    cout << "Lost Item: " << lostItem;
    cout << "\nFound Item: " << foundItem;

    if (lostItem == foundItem)
    {
        cout << "\n\nMatch Found Successfully!";
    }
    else
    {
        cout << "\n\nNo Match Found!";
    }

    return 0;
}

// Output:
// Lost Item: ID Card
// Found Item: ID Card
//
// Match Found Successfully!
