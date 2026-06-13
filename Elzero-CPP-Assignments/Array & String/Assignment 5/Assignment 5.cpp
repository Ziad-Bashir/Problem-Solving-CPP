//  I Got Helped By Gemini ||  It Gave me A Hint  Because There Was Something I Didn't Know
#include <iostream>
using namespace std;

int main()
{


// Example 1
int vals[] = {100, 200, 600, 200, 100};

    // We make it suit all cases (Examples 1, 2, and 3)
    // Check for a 5-element palindrome OR a 4-element palindrome
if ((vals[0] == vals[4]) && (vals[1] == vals[3]) || (vals[0] == vals[3]) && (vals[1] == vals[2]) )
{
    cout << "Array Is Palindrome\n";
} else
{
    cout << "Array Is Not Palindrome\n";
}



// // Example 2
// int vals[] = {100, 200, 200, 100};

// // Output
// "Array Is Palindrome"

// // Example 3
// int vals[] = {100, 300, 600, 200, 100};

// // Output
// "Array Is Not Palindrome"



    return 0;
}