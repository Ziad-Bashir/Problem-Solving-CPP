#include <iostream>
using namespace std;

int main()
{




        cout << "|===== Loop For Way =====|\n";

    for(int i = 0; i < 9;i++)
    {
        cout << i << "\n";
        i++;
    }
    for(int j = 14; j < 19; j++)
    {
        cout << j << "\n";
        j++;
    }


    // Output Needed
// 0
// 2
// 4
// 6
// 8
// 14
// 16
// 18




        cout << "|===== Loop While Way =====|\n";
int i = 0;
    while(i < 19)
    {
        cout << i << "\n";
        i++;
        i++;
        if (i == 10)
        {
            break;
        }
    }
    
    int j = 14;
    while (i < 19)
    {
        cout << j << "\n";
        j++;
        j++;
        if(j == 20)
        {
            break;
        }
    }
    
// Output Needed
// 0
// 2
// 4
// 6
// 8
// 14
// 16
// 18




    return 0;
}