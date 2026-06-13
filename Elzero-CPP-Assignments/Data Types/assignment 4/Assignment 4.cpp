//  This Assignment Imake it with Gemini  ||  Because  This Part I Forgot it  ||  But I Understood it

#include <iostream>
using namespace std;
int main()
{


// Edit Line To Make 8 Become 4

/*
 * TRICK QUESTION: Why does this output 4 instead of 8?
 * 1. By default, C++ treats any decimal number (like 10.5) as a 'double' (8 bytes).
 * 2. Adding the 'f' suffix (10.5f) explicitly tells the compiler to treat it as a 'float'.
 * 3. A 'float' takes up exactly 4 bytes in memory.
 */
cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 4

// Another Way
cout << sizeof((int)(10.5 + 5 + 20.5 + 10)) << "\n"; // 4


    return 0;
}