#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers(100, 1000);
    // Your Code Here To Create Vector
    cout << numbers.at(0) << "\n"; // 1000
    cout << numbers.at(99) << "\n"; // 1000
    return 0;
}