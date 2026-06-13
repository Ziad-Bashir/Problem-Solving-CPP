#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int nums[], int numSize)
{
int CheckMaxNum = 1;
    for(int i = 0; i < numSize; i++)
    {
        if(nums[i] < 0)
        {
            if(CheckMaxNum == 1 || nums[i] > CheckMaxNum)
            {
                CheckMaxNum = nums[i];
            }
        }
    }
return CheckMaxNum;
}

int main()
    {
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
    }