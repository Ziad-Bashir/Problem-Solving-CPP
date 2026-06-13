#include <iostream>
using namespace std;

int main()
{





        cout << "|===== Loop For Way =====|\n";
    for(int i = 0; i < 30; i++)
    {
        cout << i << "\n";
        i++;
        i++;
    }
// Output Needed
// 0
// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27



        cout << "|===== Loop While Way =====|\n";
    int i = 0;
while (i < 30)
{
    cout << i << "\n";
    i++;
    i++;
    i++;
}

// Output Needed
// 0
// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27

    return 0;
}