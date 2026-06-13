#include <iostream>
using namespace std;

int main()
{



// Add Type Alias Here

// 1st Way: Alias Declaration (The Modern Way)
using lli = long long int;  //   here we Equaled "lli" With "long long int"

// 2nd Way: typedef => Type Definition
typedef long long int lli;  //  here we Equaled "lli" With "long long int"   The Same
// typedef => Type Definition

// 3rd Way: Preprocessor Macro
#define lli long long int  // here we tell the preprocessor to replace "lli" with "long long int" everywhere

// Do Not Edit
lli num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005




    return 0;
}