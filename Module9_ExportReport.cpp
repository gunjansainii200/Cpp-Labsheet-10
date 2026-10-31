// Module 9. Write a C++ program to export lost and found records into a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    file.open("LostFoundReport.txt");

    file << "===== Lost & Found Report =====\n";
    file << "1. ID Card - Lost\n";
    file << "2. Wallet - Found\n";
    file << "3. Keys - Lost\n";

    file.close();

    cout << "Report Exported Successfully!";

    return 0;
}

// Output:
// Report Exported Successfully!
