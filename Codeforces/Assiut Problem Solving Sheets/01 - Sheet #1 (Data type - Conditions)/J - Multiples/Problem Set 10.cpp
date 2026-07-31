#include <iostream>
using namespace std;


int main()
{

    int a, b;
    cin >> a >> b;
    if(a >= 1 && b >= 1)
    {
        if((b % a == 0) || (a % b == 0))
        {
            cout << "Multiples\n";
        } else
        {
            cout << "No Multiples\n";
        }
    }

    return 0;
}

