#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// Write Your Function Here
string swapping(string words)
{
    int WordsSize = size(words);
string result = " ";
for(int i = 0; i < WordsSize; i++)
{
    if(words[i] == char('H') || words[i] == char('h')) //    Always check for your special rules (like 'H') BEFORE your general rules 
//    (like upper/lower case).
    {
        result += words[i];
    } else if(words[i] == char(isupper(words[i])))
    {
        result += char(tolower(words[i]));
    }  else if(words[i] == char(islower(words[i])))
    {
        result += char(toupper(words[i]));
    } else 
    {
        result += words[i];
    }
}
return result;
}





int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}