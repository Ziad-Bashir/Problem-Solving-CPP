#include <iostream>
#include <iterator>

using namespace std;

int main()
{

int nums[] = {10, 20, 30, 40, 20, 50};

// Method 1
// 6
    cout << "Method 1 = " <<  size(nums) << "\n";
// Method 2
// 6
    cout << "Method 2 = " << sizeof(nums) / sizeof(nums[0]) << "\n";

// Method 3
// 6
    cout << "Method 3 = " << end(nums) - begin(nums);

    /* ====================================================================
    THE "HALF-OPEN RANGE" EXPLAINED
    Array: int nums[] = {10, 20, 30, 40, 20, 50};
    ====================================================================

    Think of the array as a row of 6 houses on a street.

    Index  |  Value (Inside) |  Boundary Markers (Iterators)
    --------------------------------------------------------------------
    0    |       10        |  <-- begin(nums) (Front door of 1st house)
    1    |       20        |
    2    |       30        |
    3    |       40        |
    4    |       20        |
    5    |       50        |  (The last actual house you own)
    6    |   (Empty Lot)   |  <-- end(nums) (One step past your property)
    --------------------------------------------------------------------

    WHY DOES INDEX 6 EXIST IF I ONLY MADE 6 ITEMS?
    1. You don't own Index 6. It is just the memory address of whatever
        happens to be sitting right next to your array in RAM.
    2. end() uses it as a "Do Not Enter" sign to mark where your safe 
        data stops and the random computer memory (garbage data) begins.

    WHY C++ WAS DESIGNED THIS WAY:
    1. Perfect Math:   end (6) - begin (0) = 6 total items.
                        (If end was at 5, 5 - 0 = 5 would be mathematically wrong!)
                        
    2. Safe Loops:     Loops run "while we haven't hit the end sign". 
                        Putting the sign at Index 6 guarantees the loop 
                        safely processes Index 5 completely before stopping.
====================================================================
*/

    return 0;
}