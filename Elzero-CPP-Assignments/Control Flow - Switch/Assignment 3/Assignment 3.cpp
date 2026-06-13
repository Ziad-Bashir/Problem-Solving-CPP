// I Solve it with Gemini || But I Knew My Mistake 
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number = ";
    cin >> num;

                    //  My Wrong Code
    // switch (num)
    // {
    // case (num == 101):
    //     cout << "Case 1";
    // break;

// MISTAKE 1: You cannot use logical conditions (like ==) inside a case. 
// A switch statement already knows it is comparing 'num', so it just 
// needs the exact value you are checking for.
// ❌ WRONG: case num == 101:
// ✅ RIGHT: case 101:


    // case (num > 19 && num < 21):
    //     cout << "Case 2";
    // break;

    // MISTAKE 2: You cannot use greater than/less than (> or <) or AND (&&) in a case.
// You have to figure out the exact integer value that fits this math.
// Since the only whole number > 19 and < 21 is 20, you just use 20.
// ❌ WRONG: case num > 19 && num < 21:
// ✅ RIGHT: case 20:


    // case (num > 29 && num < 33):
    //     cout << "Case 3";
    // break;


    // MISTAKE 3: Same as above. To check a range in a switch, you have to 
// list out the exact integer values. Since the whole numbers between 
// 29 and 33 are 30, 31, and 32, you stack those cases together.
// ❌ WRONG: case num > 29 && num < 33:
// ✅ RIGHT: case 30: 
//           case 31: 
//           case 32:


    // default:
    //     cout << "Invalid Number";
    // break;
    // }


        switch (num)
    {
    case 101:
        cout << "Case 1";
    break;
    case 20:
        cout << "Case 2";
    break;
    case 30:
    case 31:
    case 32:
        cout << "Case 3";
    break;
    default:
        cout << "Invalid Number";
    break;
    }




    /*
    ====================================================================
    MASTER LIST: THINGS YOU CANNOT USE IN A C++ SWITCH STATEMENT
    ====================================================================

    1. INSIDE THE SWITCH PARENTHESES: switch( ... )
    - NO Floats or Doubles: You cannot test decimal numbers (e.g., 5.5).
    - NO Strings: You cannot test text like "Hello".
    - NO Arrays or Objects: It must be a simple integral type 
        (like int, char, short, enum, or bool).

    2. INSIDE THE CASE LABELS: case ... :
    - NO Variables: 'case x:' is illegal (unless x is a 'const' variable).
    - NO Conditions: 'case > 10:' or 'case num == 5:' are illegal.
    - NO Logical Operators: 'case 10 && 20:' is illegal.
    - NO Floats or Strings: 'case 5.5:' or 'case "Hello":' are illegal.
    - NO Duplicates: You cannot have 'case 5:' twice in the same block.

    THE GOLDEN RULE: 
    A 'switch' statement only checks one integer (or character) against 
    a list of EXACT, CONSTANT, WHOLE numbers (or characters)!
    ====================================================================
    */


    return 0;
}
