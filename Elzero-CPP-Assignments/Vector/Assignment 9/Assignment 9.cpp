#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int helperone = 2;
    int helpertwo = 6;

  // Write Your Line Of Code Here
  numbers.erase( numbers.begin() + helperone,  numbers.end() - helperone);
    for (int i : numbers) cout << i << "\n";
    return 0;
}

// IMPORTANT NOTE: Why we use numbers.begin() and numbers.end() instead of just integers:
// The erase() function in C++ vectors does NOT accept regular integer indices (like helperone).
// Instead, it strictly requires "Iterators" (which point to specific memory addresses) to know exactly where to delete.
// By writing 'numbers.begin() + helperone', we take the starting memory address of the vector
// and move it forward by 'helperone' steps to provide the exact Iterator that erase() expects.

// Needed Output
// 10
// 20
// 70
// 80