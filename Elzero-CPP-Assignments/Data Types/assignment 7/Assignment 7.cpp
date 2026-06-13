//  This Assignment Imake it with Gemini  ||  Because  This Part I Forgot it  & it's hard & Triky ||  But I Understood it

#include <iostream>
using namespace std;

int main()
{




int a = 1;
int b = 13;
int c = 17;
int d = 70;


// Calculate the ASCII values and cast them to characters
char semecolon = (char)(c+c);  // 17 + 17 = 34  => "
char firstLetter = (char)(d - a);  // 70 - 1 = 69  => 'E'
char secondLetter = (char)(d + c); // 70 + 17 = 87  => 'W'
char thirdLetter = (char)(d + b);  // 70 + 13 = 83  => 'S'


cout << semecolon << firstLetter << secondLetter << thirdLetter << semecolon << "\n";


cout << "=============================================\n";

// I Brought them To know their ASCII Values.

cout << int('"') << "\n";
cout << int('E') << "\n";
cout << int('W') << "\n";
cout << int('S') << "\n";
cout << int('"') << "\n";




// // Output Needed
// "EWS"

    return 0;
}