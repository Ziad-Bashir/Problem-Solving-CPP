#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 5, 4, 3, 2, 1 };

    // Method One
    reverse(nums.begin(), nums.end());

    // Method Two
    sort(nums.begin(), nums.end());

    // Method Three -> Use Swap + Loop For Challenge
    for(int i = 0; i < nums.size() / 2; i++)
    {
        swap(nums[i], nums[nums.size() - 1 - i]);
    }

/*
    * ============================================================================
    * ALGORITHM EXPLANATION: REVERSING A VECTOR USING "TWO POINTERS"
    * ============================================================================
    * * HOW THE LOOP WORKS (THE BREAKDOWN):
    * * 1. THE START (int i = 0):
    * - We start our loop normally from the very first element (Index 0).
    * - We use this as our "Left Pointer" moving forward.
    * * 2. THE BRAKES / STOPPING CONDITION (i < nums.size() / 2):
    * - WHY DIVIDE BY 2? Because in every single step, the 'swap' function 
    * moves TWO elements at once (one from the front, one from the back). 
    * - If we loop through the entire vector, we will reverse the elements, 
    * and then accidentally reverse them back to their original state!
    * - Stopping at the exact middle ensures we only swap each half once.
    * - (Note: For odd-sized vectors, the exact middle element doesn't need
    * to move at all, which is why stopping before it works perfectly).
    * * 3. THE SWAP EQUATION: swap(nums[i], nums[nums.size() - 1 - i]);
    * - The First Part 'nums[i]': The current element from the front.
    * - The Second Part 'nums[nums.size() - 1 - i]':
    * * 'nums.size() - 1' gives us the very last index of the vector.
    * * '- i' makes this index dynamically step backwards as 'i' moves forward.
    * * This mathematically acts as our "Right Pointer" moving backward.


    * * ----------------------------------------------------------------------------
    * STEP-BY-STEP TRACE (Example: {5, 4, 3, 2, 1} | Size = 5 | Limit: i < 2):
    * ----------------------------------------------------------------------------
    * - Loop 1 (i = 0): Swaps Index 0 with Index 4.
    * Vector becomes: {1, 4, 3, 2, 5}
    * * - Loop 2 (i = 1): Swaps Index 1 with Index 3.
    * Vector becomes: {1, 2, 3, 4, 5} (Vector is now fully reversed!)
    * * - Loop 3 (i = 2): 2 is NOT less than 2. The loop condition is false. Loop stops!
    * The middle element (Index 2, Value 3) is left untouched. Mission accomplished.
    * ============================================================================
*/

/*
    * ============================================================================
    * DRY RUN / TRACE TABLE TEMPLATE: TWO POINTERS REVERSE
    * ============================================================================
    *
    * 1. INITIAL MEMORY STATE:
    * Indices:    [ 0 ]   [ 1 ]   [ 2 ]   [ 3 ]   [ 4 ]
    * Values:       5       4       3       2       1
    * Loop Limit: i < 2   (Because Size 5 / 2 = 2)
    *
    * 2. TRACE TABLE (STEP-BY-STEP):
    * ----------------------------------------------------------------------------
    * Loop # |  i  | nums[i] (Left) | nums[4-i] (Right) | Action & Vector State
    * ----------------------------------------------------------------------------
    * Loop 1 |  0  | nums[0] = 5    | nums[4] = 1       | Swap 5 and 1
    * |     |                |                   | State: {1, 4, 3, 2, 5}
    * ----------------------------------------------------------------------------
    * Loop 2 |  1  | nums[1] = 4    | nums[3] = 2       | Swap 4 and 2
    * |     |                |                   | State: {1, 2, 3, 4, 5}
    * ----------------------------------------------------------------------------
    * Loop 3 |  2  | N/A            | N/A               | 2 < 2 is FALSE!
    * |     |                |                   | LOOP STOPS (Break)
    * ----------------------------------------------------------------------------
    *
    * 3. FINAL MEMORY STATE:
    * Indices:    [ 0 ]   [ 1 ]   [ 2 ]   [ 3 ]   [ 4 ]
    * Values:       1       2       3       4       5
    * * Note: The middle element (Index 2, Value 3) was never touched,
    * which proves the algorithm works perfectly.
    * ============================================================================
 */




    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5