#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int main()
{
double r;
cin >> r;

const double PI = 3.141592653;
double area = PI * pow(r, 2);

    if(r >= 1 && 100 >= r) 
    {
        cout << fixed << setprecision(9) << area <<"\n";
    } else
    {
        cout << "inValid, Enter R Again\n";
        cin >> r;
    }

    return 0;
}