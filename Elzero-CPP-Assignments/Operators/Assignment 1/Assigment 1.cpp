//  When I solved them For The First time  well  ,, I forgot to add the "%"

    // 1. ()        -> Highest priority (Parentheses first)
    // 2. *, /, %   -> Middle priority (Left to right)
    // 3. +, -      -> Lowest priority (Left to right)
#include <iostream>
using namespace std;

int main()
{


int num = 3;
cout << num + num << "\n";                 // 6
cout << num * num - num << "\n";           // 6
cout << (num * num) - num << "\n";         // 6
cout << (num + num % num) + num << "\n";   // 6
cout << (num % num) + (num + num) << "\n"; // 6
cout << (num + num) - (num % num) << "\n"; // 6
cout << (num + num) * (num / num) << "\n"; // 6




    return 0;
}