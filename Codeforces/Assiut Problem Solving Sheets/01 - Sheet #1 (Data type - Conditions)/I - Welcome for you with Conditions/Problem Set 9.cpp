#include <iostream>
using namespace std;


int main()
{

    int a, b;
    cin >> a >> b;
    if((a <= 100 && a >= 0) && (b <= 100 && b >= 0))
    {
        if(a >= b)
        {
            cout << "Yes\n";
        } else
        {
            cout << "No\n";
        }
    }

    return 0;
}

