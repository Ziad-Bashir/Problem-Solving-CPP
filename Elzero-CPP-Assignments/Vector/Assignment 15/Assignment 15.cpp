#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8 };

    // Your Code Here
    rotate(nums.begin(), nums.begin() + 4, nums.end());

/*
    * ============================================================================
    * ALGORITHM EXPLANATION: HOW 'std::rotate' WORKS
    * ============================================================================
    *
    * 1. THE SYNTAX:
    * rotate(first, middle, last);
    * - first:  The starting point of the rotation (usually vector.begin()).
    * - middle: The element that you want to become the NEW FIRST element.
    * - last:   The end point of the rotation (usually vector.end()).
    *
    * 2. WHAT HAPPENS BEHIND THE SCENES (THE LOGIC):
    * Our Code: rotate(nums.begin(), nums.begin() + 4, nums.end());
    * Initial Vector: {1, 2, 3, 4, 5, 6, 7, 8}
    *
    * - Step A (Locating the Target): 
    * 'nums.begin() + 4' moves 4 steps forward from the start.
    * It points to Index 4, which is the number '5'.
    * Now the compiler knows that '5' must become the new beginning.
    *
    * - Step B (The "Chunking" Method):
    * The compiler is smart; it doesn't move elements one by one.
    * It cuts the entire chunk BEFORE our target number: {1, 2, 3, 4}.
    * Then, it pastes this whole chunk at the very end of the vector.
    *
    * - Step C (The Shift):
    * The remaining chunk {5, 6, 7, 8} automatically slides to the front
    * to fill the empty space.
    *
    * 3. FINAL RESULT:
    * {5, 6, 7, 8, 1, 2, 3, 4}
    * ============================================================================
*/
    for (int i : nums)
    {
        cout << i << "\n";
    }
    return 0;
    }

// Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4