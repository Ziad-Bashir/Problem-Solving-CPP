#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40 };

    // Method One
    numbers.pop_back();
    // Method Two
    numbers.erase( numbers.end() - 1);// Her It Deleted  The Last Elemet
    // numbers.erase(numbers.begin() + 3, numbers.end()); 

    // Method Three
    numbers.resize(numbers.size() - 1);
    // numbers.resize(3);  //  Hardcoding

    // Do Not Edit
    for (int i : numbers)
    {
    cout << i << "\n";
    }
    return 0;
}

// Needed Output
// 10
// 20
// 30

    /*
    * --- VECTOR ELEMENT REMOVAL & ERASE MECHANICS ---
    *
    * 1. HOW THE 'ERASE' FUNCTION WORKS:
    * - Target Mode (Single Argument): vector.erase(position);
    * Removes ONLY the specific element located at that exact memory address.
    *
    * - Range Mode (Two Arguments): vector.erase(start, end);
    * Removes a slice of elements, starting from 'start' up to (but NOT including) 'end'.
    *
    * 2. FOUR DIFFERENT WAYS TO REMOVE THE LAST ELEMENT:
    * - Method 1 (Direct & Standard): 
    * numbers.pop_back();
    *
    * - Method 2 (Using Erase Target Mode): 
    * numbers.erase(numbers.end() - 1);
    * (Targets exactly the last element and deletes it).
    *
    * - Method 3 (Dynamic Resizing): 
    * numbers.resize(numbers.size() - 1); 
    * (Shrinks the vector size by 1, automatically dropping the extra element at the end).
    *
    * - Method 4 (Using Assign to rebuild): 
    * numbers.assign(numbers.begin(), numbers.end() - 1);
    * (How it works: 'assign' clears the vector and copies the elements again).
    * -> Starts copying from: numbers.begin()
    * -> Stops exactly at: numbers.end() - 1 (The last element)
    * -> CRITICAL RULE: The stop point in C++ is ALWAYS EXCLUSIVE. 
    * It acts as a "Stop Sign". The copying strictly stops BEFORE it.
    * Therefore, the last element is NOT taken into the new vector!
    */


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