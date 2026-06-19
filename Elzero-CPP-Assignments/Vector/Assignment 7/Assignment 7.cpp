#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 10, 40, 50 };
    vector<int>::iterator iter = numbers.begin();

    for ( iter = numbers.begin(); iter < numbers.end(); iter++)
    {
        cout << *iter << "\n";
    }
    return 0;
}