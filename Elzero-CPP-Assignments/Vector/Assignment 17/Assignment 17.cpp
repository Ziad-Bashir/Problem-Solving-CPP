#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> n1 = { 1, 2, 3 };
    vector<int> n2 = { 4, 5, 6 };

    // Your Insert Code Here
    vector<int> allvectors;

    allvectors.insert(allvectors.begin(),n1.begin(), n1.end());
    allvectors.insert(allvectors.end(),n2.begin(), n2.end());


/*
    * ============================================================================
    * ALGORITHM EXPLANATION: CONCATENATING VECTORS USING 'insert'
    * ============================================================================
    *
    * 1. THE SYNTAX FOR RANGE INSERTION:
    * destination_vector.insert(insert_position, source_start, source_end);
    * - insert_position: Where to start pasting in the destination vector.
    * - source_start: The beginning of the data you want to copy.
    * - source_end: The end of the data you want to copy.
    *
    * 2. THE LOGIC & STEP-BY-STEP EXECUTION:
    * * Step A: Creating an EMPTY Destination Vector
    * Code: vector<int> allvectors;
    * Why? If we pre-allocate size like 'allvectors(6)', it fills the vector 
    * with 6 zeros. The 'insert' function PUSHES existing elements to the right. 
    * So, inserting into a pre-allocated vector would result in 12 elements 
    * (our numbers + the initial zeros). We start empty to insert cleanly.
    *
    * Step B: Inserting the First Vector (n1)
    * Code: allvectors.insert(allvectors.begin(), n1.begin(), n1.end());
    * Action: We tell the compiler to go to the VERY BEGINNING of 'allvectors',
    * copy everything from the start to the end of 'n1', and paste it.
    * Current State: {1, 2, 3}
    *
    * Step C: Inserting the Second Vector (n2)
    * Code: allvectors.insert(allvectors.end(), n2.begin(), n2.end());
    * Action: Now 'allvectors' has data. We tell the compiler to go to the 
    * VERY END of 'allvectors', copy everything from 'n2', and paste it.
    * Final State: {1, 2, 3, 4, 5, 6}
    *
    * 3. CRITICAL MEMORY RULE:
    * You CANNOT do this: insert(..., n1.begin(), n2.end());
    * Why? Because 'n1' and 'n2' live in completely different locations in 
    * the computer's memory. You cannot copy a continuous block of memory 
    * that spans across two separate vectors. Each vector must be inserted 
    * in its own separate line of code.
    * ============================================================================
*/

    for (int i : allvectors)
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
// 6