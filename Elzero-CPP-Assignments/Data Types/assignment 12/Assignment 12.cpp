
//  This Assignment Imake it with Gemini , It Gave me juat A hint  ||  Because  This Part I Forgot it  & it's just Triky ||  But I Understood it

// The Dilemma Was in Which Should I Use the Value of The Variables || or || The Size of The Variables in Memory 
#include <iostream>
using namespace std;

int main()
{



// Do Not Edit Here
short a = 1000; // 2 Bytes
int b = 10000;  // 4 Bytes
long double c = 5.560000505012;  // 16  Bytes



// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof(c) + sizeof(b) << "\n"; // 20
cout << sizeof(c) * sizeof(a) << "\n"; // 32
cout << int(a) * int(c) << "\n"; // 5000
cout << char( int(c)* sizeof(c) ) << "\n"; // P => 80




    return 0;
}