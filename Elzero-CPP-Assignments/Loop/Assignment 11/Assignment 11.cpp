#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Friends Array
string friends[] = {"Ahmed", "Osama", "Ameer"};


for(int i = 0; i < 3; i++)
{
    cout << "=========\n";
    cout << "= " << friends[i] << " =" << "\n";
    cout << "==================\n";
    cout << "== ";
    for (char j = 0; j < 6; j++)
    {
        cout << friends[i][j];
        if(j < 4)
        {
            cout << ", ";
        }
    }
    cout << " =";
    cout << "\n==================\n";
}

// Output Needed
// =========
// = Ahmed =
// ==================
// == A, h, m, e, d =
// ==================

// =========
// = Osama =
// ==================
// == O, s, a, m, a =
// ==================

// =========
// = Ameer =
// ==================
// == A, m, e, e, r =
// ==================


    return 0;
}