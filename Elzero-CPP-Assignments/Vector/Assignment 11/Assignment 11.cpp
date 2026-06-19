#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    vector<float> floats(100);

    // Fill Integers Here
    numbers.assign(100, 1000);
    // Fill Floats Here
    fill(floats.begin(), floats.end(),100.5);

        /*
    * IMPORTANT LESSON: UPDATING VECTORS AFTER DECLARATION
    * * 1. The Syntax Error: 
    * Attempting to use constructor syntax like 'numbers(100, 1000)' after the vector is already declared causes an error. 
    * Constructor parentheses () can ONLY be used on the exact line the variable is created.
    * * 2. Method 1 - For Empty Vectors:
    * To give size and values to an empty vector after declaration, use the built-in vector method '.assign()'.
    * Syntax: vector_name.assign(count, value);
    * * 3. Method 2 - For Pre-sized Vectors:
    * If the vector already has memory allocated (e.g., floats(100)), do not resize it. 
    * Instead, use the 'fill()' function from the <algorithm> library to populate the existing memory slots.
    * Syntax: fill(start_iterator, end_iterator, value);
        */

    cout << numbers.at(0) << "\n"; // 1000
    cout << numbers.at(99) << "\n"; // 1000

    cout << floats.at(0) << "\n"; // 100.50
    cout << floats.at(99) << "\n"; // 100.50
    return 0;
}

/*
 * --- C++ FUNCTION OVERLOADING: THE TWO FACES OF 'ASSIGN' ---
 * * In C++, multiple functions can share the exact same name but do completely different things 
 * depending on the type of arguments you pass inside the parentheses. This is called "Function Overloading".

 * * VERSION 1: assign(count, value)
 * - What the compiler sees: Two standard numbers (e.g., numbers.assign(100, 1000);).
 * - What it does: Clears the old vector, creates 'count' amount of new slots, and fills every single slot with 'value'.
 * - Use case: When you need to build or reset a vector with identical default values.

 * * VERSION 2: assign(start_iterator, end_iterator)
 * - What the compiler sees: Two memory addresses/Iterators (e.g., numbers.assign(numbers.begin(), numbers.end() - 1);).
 * - What it does: Clears the old vector, then copies elements from the 'start' address up to (but EXCLUDING) the 'end' address.
 * - Use case: When you need to copy, slice, or rebuild a vector using a specific range of existing data.
 */