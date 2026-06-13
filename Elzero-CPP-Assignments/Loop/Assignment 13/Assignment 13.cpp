#include <iostream>
using namespace std;

int main()
{
        cout <<"|=====  With all Numbers =====|\n";
    for(int i =3; i <= 30; i = i + 3)
    {
        cout << i << "\n";
    }

// Output Needed
// 30
// 27
// 24
// 21
// 18
// 15
// 12
// 9
// 6
// 3
        cout <<"|=====  Without Even Numbers =====|\n";
    for(int i =3; i <= 30; i = i + 3)
    {
        if(i % 2 != 0)
        {
            cout << i << "\n";
        }

    }
// Without Even Numbers
// 27
// 21
// 15
// 9
// 3

    return 0;
}