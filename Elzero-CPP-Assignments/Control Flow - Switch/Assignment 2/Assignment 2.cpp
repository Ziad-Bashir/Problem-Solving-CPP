#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter The Number of The Day = ";
    cin >> day;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "Shop Is Open";
        break;
    case 5:
        cout << "5 Shop Is Closed";
        break;
    default:
        cout << "Day Is Not Valid";
    }

    return 0;
}