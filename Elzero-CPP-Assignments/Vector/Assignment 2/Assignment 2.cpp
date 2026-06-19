#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> numbers = { 10, 20, 30, 40 };
    int NumSize = numbers.size();
    vector<int>::iterator it = numbers.begin();
    vector<int>::iterator ite = (numbers.end() - 1);

    /* --- The ".end()" Iterator Mistake ---

- The Mistake: Trying to print the last element using '*numbers.end()'.
- The Reason: .end() does NOT point to the last element. It points to the empty memory space immediately AFTER the last element. Dereferencing it causes a Garbage Value or a Crash.
- The Fix: Always use (numbers.end() - 1) to step back one memory location so it points to the actual last element.
*/

    cout << "First Number: " << numbers[0] << "\n";
    cout << "First Number: " << *it << "\n";
    cout << "First Number: " << numbers.front() << "\n";
    cout << "First Number: " << numbers.at(0) << "\n";

    cout << "Last Number: " << numbers[3] << "\n";
    cout << "Last Number: " << *ite << "\n";
    cout << "Last Number: " << numbers.back() << "\n";
    cout << "Last Number: " << numbers.at(NumSize - 1) << "\n";
    return 0;
}