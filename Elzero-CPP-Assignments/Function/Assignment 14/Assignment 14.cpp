#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int num1, int num2, string op = "a")
{
    int Needed_op;
    if(op == "a" || op == "add")
    {
        Needed_op = num1 + num2;
    } else if(op == "s" || op == "subtract")
    {
        Needed_op = num1 - num2;
    } else if(op == "m" || op == "multiply")
    {
        Needed_op = num1 * num2;
    } else
    {
        Needed_op = 0;
    }
    return Needed_op;
}


int main()
{
    cout << calculate(10, 20) << "\n"; // 30
    cout << calculate(10, 20, "a") << "\n"; // 30
    cout << calculate(10, 20, "s") << "\n"; // -10
    cout << calculate(10, 20, "subtract") << "\n"; // -10
    cout << calculate(10, 20, "multiply") << "\n"; // 200
    cout << calculate(10, 20, "m") << "\n"; // 200
    cout << calculate(10, 20, "Invalid") << "\n"; // 0
    return 0;
}