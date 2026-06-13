#include <iostream>
using namespace std;

int main()
{


int index = 10;
int jump = 2;

for (;;)
{
    if(index >= 4)
    {
        cout << index << "\n";
        index = index - jump;
    }

}


// Output Needed
// 10
// 8
// 6
// 4




    return 0;
}