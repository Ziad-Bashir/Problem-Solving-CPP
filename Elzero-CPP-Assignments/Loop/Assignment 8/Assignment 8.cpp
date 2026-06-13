#include <iostream>
using namespace std;

int main()
{



            cout << "|===== Loop For Way =====|\n";
    for(int i = 2; i <= 126; i = (i * 2) + 2)
    {
        cout << i << "\n";
    }
// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126

        cout << "|===== Loop While Way =====|\n";

        int i = 2;
while(i <= 126)
{
    cout << i << "\n";
    i = (i * 2) + 2;
}

// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126


    return 0;
}