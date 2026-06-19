#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> nums = { 100, 200, 300, 400 };
vector<int>::iterator it;
for(it = nums.begin(); it < nums.end(); it++)
{
    cout << *it << "\n";
}
cout << "First Element Is: " << nums.front() << "\n";
nums.push_back(500);
cout << "Last Element Is: " << nums.back() << "\n";

/* --- Vector Functions & Iterators Core Concepts ---

1. .front() & .back():
    - Return the actual VALUES directly (e.g., 100 or 500).
    - Used for direct access, NOT for loops.

2. .begin() & .end():
    - Return ITERATORS (Memory Locations / Addresses).
    - Used in loops because they act like a GPS, allowing navigation to the next memory cell using 'it++'.

3. The '*' Symbol (*it):
    - Known as the "Dereference Operator".
    - Since iterators hold locations, we use '*' to tell the compiler: "Go to this memory location and get the value stored inside it."
*/

    return 0;
}

// Output
// 100
// 200
// 300
// 400
// "First Element Is: 100"
// "Last Element Is: 500"