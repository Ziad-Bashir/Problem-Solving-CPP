#include <iostream>

using namespace std;

int main()
{

    long long x, y;
    cin >> x >> y;
    if(x >= 1 && y >= 1)
    {
    cout << x << " + " << y << " = " << x + y << "\n";
    cout << x << " * " << y << " = " << x * y << "\n";
    cout << x << " - " << y << " = " << x - y << "\n";
    } else
    {
        cout << "Not Invalid" << "\n";
    }
    return 0;
}