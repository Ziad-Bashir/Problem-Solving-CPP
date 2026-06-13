// Here's in This Problem I Have Did it With The Function Easily
// But I Waited A lot To Make It With The loop 
// Gemini Helped me in it not Writing The Code But To Make Me Think How Can I Solve 
// Because It Told Me To Make it inside The Function not outside it
#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int num1, int num2)
{
    cout << "The Power of The Number: ";
    cout <<pow(num1, num2) << "\n";

    int result = 1;
    for(int i = 0; i < num2; i++)
    {
        result *= num1;
    }
    cout << "The Power of The Number: " << result << "\n";
}



int main()
{
    thepower(2, 5);  // 32
    return 0;
}