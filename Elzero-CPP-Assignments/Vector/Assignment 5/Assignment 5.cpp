#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
    vector<int>::iterator it = numbers.begin();

// IMPORTANT: Keep only ONE method active (uncommented) at a time.
// The other two methods must be commented out so they don't stack and push the iterator out of bounds.

    // Write Method One
    it = numbers.end() - 1 - 1 - 1 - 1;
    // Write Method Two
    advance(it, (-1 * -1) + (-1 * -1) + (-1 * -1) + (-1 * -1));
    // Write Method Three
    it = it + ((-1 * -1) + (-1 * -1) + (-1 * -1) + (-1 * -1));

    cout << *it << "\n"; // 50
    return 0;
} 