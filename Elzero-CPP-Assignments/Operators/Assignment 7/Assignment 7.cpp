//  I Made it With Gemini  Cuz it was so hard ||  I Learned That I should make outside Mathematiclly Make it in Chunks To KnoW What should  I Do in The code
#include <iostream>
using namespace std;

int main()
{

int a = 10;
int b = 20;

cout << ((a + b) * (a + b) + a * a) * a << "\n";       // 10000
    // The Chunk is To Make it 1000 * 10 = 10000
    // ((10 + 20) * (10 + 20) + 10 * 10) * 10 = 10000



    /*
        =========================================================================
        PROBLEM: Modify the expression to output exactly 10000 using only ().
        ORIGINAL EXPRESSION: a + b * a + b + a * a * a
        
        THE "FORMULA" (Operator Precedence & Grouping Strategy):
        1. The Law: Parentheses () have the highest priority in C++. They force 
        the compiler to calculate trapped expressions before anything else.
        2. The Strategy: Work backwards from the target number (10000).
        - We know: 1000 * 10 = 10000
        - We have: 'a' which equals 10. 
        - Goal: Make a large chunk of the equation equal 1000, then multiply 
            that entire chunk by 'a' at the very end.
        
        STEP-BY-STEP BREAKDOWN:
        - Step 1: Force addition first to create 900
                (a + b) * (a + b)  =>  (10 + 20) * (10 + 20) = 30 * 30 = 900
                
        - Step 2: Group the next natural multiplication to create 100
                a * a  =>  10 * 10 = 100
                
        - Step 3: Wrap both steps in a giant parenthesis to add them into 1000
                ( (a + b) * (a + b) + a * a )  =>  (900 + 100) = 1000
                
        - Step 4: Multiply that entire resulting group by 'a'
                1000 * a  =>  1000 * 10 = 10000
        =========================================================================
        */

// Hint For Help
cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110
cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300

    return 0;
}