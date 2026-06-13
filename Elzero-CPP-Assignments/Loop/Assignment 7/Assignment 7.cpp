#include <iostream>
using namespace std;

int main()
{



            cout << "|===== Loop For Way =====|\n";

        for(int i = 2; i <= 128; i *= 2)
        {
            cout << i << "\n";
        }
// Output Needed
// 2
// 4
// 8
// 16
// 32
// 64
// 128
        cout << "|===== Loop While Way =====|\n";
int i = 2;
while (i <= 128)
{
    cout << i << "\n";
    i *= 2;
}


    return 0;
}