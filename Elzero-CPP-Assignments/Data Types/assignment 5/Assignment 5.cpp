#include <iostream>
using namespace std;
int main()
{

char a = '~';
char b = '&';
char c = '%';
char d = 'A';

cout << int(a) << "\n";  // <= 126
cout << int(b) << "\n";  // <= 38
cout << int(c) << "\n";  // <= 37
cout << int(d) << "\n";  // <= 65
// // Output Needed
// "ASCII Value of ~ Is 126"
// "ASCII Value of & Is 38"
// "ASCII Value of % Is 37"
// "ASCII Value of A Is 65"

    return 0;
}