#include <iostream>
using namespace std;

int main()
{


    /*
    1982 => "My Birth Day"
    1989 => "My First Work"
    1995 => "Windows 95"
    2000 => "Windows Millennium"
    2002 => "Created My vBulletin Forum"
    Any Other Year => "No Events in This Year"
    */

int year;
cout << "Enter The Year = ";
cin >> year;

    switch (year)
    {
    case 1982:
        cout << "My Birth Day\n";
        break;
    case 1989:
        cout << "My First Work\n";
        break;
    case 1995:
        cout << "Windows 95\n";
        break;
    case 2000:
        cout << "Windows Millennium\n";
        break;
    case 2002:
        cout << "Created My vBulletin Forum\n";
        break;
    default:
        cout << "No Events in This Year\n";
    break;
    }

    // My Problem Was in Forgeting The {} 
    return 0;
}