#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> n1 = { 1, 2, 3 };
    vector<int> n2 = { 4, 5, 6 };

    // Your Merge Code Here
    vector<int> allvectors(n1.size() + n2.size());

    merge(n1.begin(), n1.end(), n2.begin(), n2.end(),allvectors.begin());

/*
    * ============================================================================
    * ALGORITHM EXPLANATION: 'std::merge' & MEMORY OPTIMIZATION
    * ============================================================================
    *
    * 1. THE SYNTAX:
    * merge(first1, last1, first2, last2, destination);
    * - first1, last1: The starting and ending points of the first sorted vector.
    * - first2, last2: The starting and ending points of the second sorted vector.
    * - destination:   The starting point of the vector where results will be stored.
    * * * CRITICAL RULE: Both input vectors MUST already be sorted before merging.
    *
    * 2. HOW IT WORKS (THE LOGIC):
    * The compiler looks at the first element of both vectors, compares them, 
    * picks the smaller one, and places it in the destination vector. It repeats 
    * this process until both input vectors are fully merged into a single, 
    * perfectly sorted vector.
    *
    * 3. OUR SPECIFIC IMPLEMENTATION (THE OPTIMIZED APPROACH):
    * Our Code: 
    * vector<int> allvectors(n1.size() + n2.size());
    * merge(n1.begin(), n1.end(), n2.begin(), n2.end(), allvectors.begin());
    *
    * - What we did: We dynamically calculated the exact total size needed 
    * (size of n1 + size of n2) and pre-allocated it to 'allvectors' 
    * right when it was created.
    *
    * - Why this is the Best Practice (Performance): 
    * Instead of using tools like 'back_inserter' (which forces the vector 
    * to constantly pause, find new memory, and copy old data as it grows), 
    * we reserved all the needed memory slots ("chairs") at once. 
    * This allows the 'merge' function to fill the vector at maximum speed 
    * without any memory reallocation overhead. It is clean, dynamic, and fast.
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