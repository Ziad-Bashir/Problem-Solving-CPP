#include <iostream>
using namespace std;


int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int maximum;
    int minimum;

    if(a >= b && a >= c)
    {
        maximum  = a;
    } else if(b >= a && b >= c)
    {
        maximum = b;
    }else if(c >= a && c >= b)
    {
        maximum = c;
    }


    if(a <= b && a <= c)
    {
        minimum  = a;
    }else if(b <= a && b <= c)
    {
        minimum = b;
    }else if(c <= a && c <= b)
    {
        minimum = c;
    }

    cout << minimum << " ";
    cout << maximum;



    return 0;
}

