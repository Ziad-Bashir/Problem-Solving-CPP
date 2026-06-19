#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> firstnumbers = { 10, 30, 50, 70 };
    vector<int> secondnumbers = { 20, 40, 60, 80 };
    vector<int> allvectors;

    allvectors.insert(allvectors.begin(),firstnumbers.begin(), firstnumbers.end());
    allvectors.insert(allvectors.end(),secondnumbers.begin(), secondnumbers.end());

    sort(allvectors.begin(), allvectors.end());
    for(int i: allvectors)
    {
        cout << i << "\n";
    }

/*
    * ============================================================================
    * SIMPLE GUIDE: COPYING VECTORS USING 'insert'
    * ============================================================================
    *
    * THE GOLDEN RULE (The 3 Questions for each line): 
    * Target_Vector.insert( WHERE_TO_PASTE , WHERE_TO_START_COPYING , WHERE_TO_STOP_COPYING );
    *
    * ----------------------------------------------------------------------------
    * STEP 1: INSERTING THE FIRST VECTOR
    * ----------------------------------------------------------------------------
    * Code: allvectors.insert( allvectors.begin() , firstnumbers.begin() , firstnumbers.end() );
    * * - What happens here? 'allvectors' is completely EMPTY at this moment.
    * - So, we use 'allvectors.begin()' in the first parameter. This tells the 
    * compiler: "Start pasting the numbers at the very front of the empty line."
    *
    * ----------------------------------------------------------------------------
    * STEP 2: INSERTING THE SECOND VECTOR (The 'end' trick)
    * ----------------------------------------------------------------------------
    * Code: allvectors.insert( allvectors.end() , secondnumbers.begin() , secondnumbers.end() );
    * * - What happens here? 'allvectors' is NO LONGER EMPTY (it has the first numbers).
    * - Why do we use 'allvectors.end()'? If we use 'begin()' again, the new numbers 
    * will cut the line at the front and mess up the order.
    * - By using 'allvectors.end()' as our starting paste location, we tell the 
    * compiler: "Go to the very back of the current line, and START pasting the 
    * new numbers right there." 
    * - (Note: The first parameter decides where to PASTE, while the third parameter 
    * 'secondnumbers.end()' decides where to STOP copying from the s ource).
    * ============================================================================
*/
    return 0;
}

// Output Needed
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80