#include <iostream>
using namespace std;

// Write Your Function Here

int plusandmultiply(int num1[], int num2)
{
    int EvenNums = 0;
    int OddNums = 1;
    for(int i = 0; i < num2; i++)
    {
        if(num1[i] % 2 == 0)
        {
            EvenNums += num1[i];
        } else if (num1[i] % 2 != 0)
        {
            OddNums *= num1[i];
        }
    }
        cout << "Total = ";
    return EvenNums + OddNums;
}








int main()
{
    int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205
    return 0;
}