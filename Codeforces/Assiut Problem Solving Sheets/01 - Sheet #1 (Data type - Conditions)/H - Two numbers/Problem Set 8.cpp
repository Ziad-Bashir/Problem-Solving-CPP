#include <iostream>
#include <cmath>
using namespace std;


int main()
{

    int a, b;
    cin >> a >> b;

    cout << "Floor: " << a << " / " << b << " = " << floor((double)a / b) << "\n";
    cout << "Ceil: " << a << " / " << b << " = " << ceil((double)a / b) << "\n";
    cout << "Round: " << a << " / " << b << " = " << round((double)a / b) << "\n";

    return 0;
}

