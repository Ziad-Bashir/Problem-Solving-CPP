#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b; //  just u have to take the inputs such as exaclty How They 're gonna work
 //  which's   (a => First num) (s => operation) (b => second num)   
    //         (ex)     first num + second num

    if(s == '+')
    {
        cout << a + b;
    } else if(s == '-')
    { 
        cout << a - b;
    } else if(s == '*')
    {
        cout << a * b;
    } else if(s == '/')
    {
        cout << a / b;
    }

    return 0;
}
