// --- 4 RULES TO REMEMBER ---
//
// 1. Exceptions First: 
//    Always check for your special rules (like 'H') BEFORE your general rules 
//    (like upper/lower case).
//
// 2. The 'else' Safety Net: 
//    If you don't use a final 'else' to catch spaces and symbols, the 
//    computer ignores them and they vanish from your string.
//
// 3. The "New Variable" Box (What I missed!):
//    I cannot just print the letters directly. I must create a brand new, 
//    empty string variable (string result = "") to safely store and build 
//    my final answer, letter by letter.
//
// 4. Build, Then Return: 
//    If main() uses 'cout <<', your function's job isn't to print. Its job 
//    is to use that new variable to build the string (result +=) and return it.

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

    // ------ tolower() => Convert The Capital Letters To Small Letters  ||  A to a
    // ------ toupper() => Convert The Small Letters To Capital Letters  ||  a to A
    // ------ isupper() => it Asks If The Letter is Capital or no
    // ------ islower() => it Asks If The Letter is small or no
    // ------ isspace() => it Asks If There Space OR no To Remove All Spaces Even If There {\n, \t,....etc}

// Write Your Function Here



string swapping(string words) 
{
    int wordsSize = size(words); 
    string result = ""; // This is our empty box to store the final sentence
    
    for (int i = 0; i < wordsSize; i++)
    {
        // 1. THE EXCEPTION: 'H' or 'h'
        if (words[i] == 'H' || words[i] == 'h') 
        {
            result += words[i]; // Add it to our result string instead of printing
        } 
        // 2. GENERAL RULE: Uppercase to Lowercase
        else if (isupper(words[i])) 
        {
            result += char(tolower(words[i]));
        } 
        // 3. GENERAL RULE: Lowercase to Uppercase
        else if (islower(words[i])) 
        {
            result += char(toupper(words[i]));
        } 
        // 4. CATCH-ALL: Spaces and symbols
        else 
        {
            result += words[i];
        }
    }
    
    // Send the fully built string back to main()
    return result; 
}

//  My Former Code & Mistakes
// // MISTAKE 1: You created a new string here instead of using the 'words' parameter passed from main!
//     string swapping = "hero Of THe PROgramming"; 
    
//     // MISTAKE 2: You measured the size of your hardcoded string, not the actual 'words' parameter.
//     int WordsSize = size(swapping); 
    
//     for (int i = 0; i < WordsSize; i++)
//     {
//         if(isupper(words[i]))
//         {
//             cout << char(tolower(words[i])); // Prints the small letter
            
//             // MISTAKE 3: 'h' is a small letter, so it will NEVER enter this 'isupper' block. This is dead code!
//             if(words[i] == char('h'))
//             {
//                 cout << char('h');
//             } 
//             // MISTAKE 4: If the letter is 'H', you already printed small 'h' on line 17, and now you print 'H' again. (Output becomes: hH)
//             else if(words[i] == char('H'))
//             {
//                 cout << char('H');
//             }
//         } 
//         else if(islower(words[i]))
//         {
//             cout << char(toupper(words[i]));
//         }
        
//         // MISTAKE 5: You have no 'else' block here! So when the loop sees a space ' ', it just ignores it completely and the space vanishes.
//     }
//     cout << "\n";

//     // MISTAKE 6: Because main() uses 'cout << swapping()', returning an int means an extra '0' gets printed at the very end of your sentence.
//     return 0;
// }

int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}//  hEROoFthHEproGRAMMING