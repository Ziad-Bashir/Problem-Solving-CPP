#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int num1[], int num2, int num3)
{
    int result = 0;
    for(int i = 0; i < num2; i++)
    {
        if(num1[i] != num3)
        {
            result += num1[i];
        }
    }
    cout << "The Sum = ";
    return result;
}






int main()
{
    int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    return 0;
}