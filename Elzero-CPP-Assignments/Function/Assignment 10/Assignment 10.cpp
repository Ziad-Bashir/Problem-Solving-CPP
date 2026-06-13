//  I Tried To Solve For Days But I Couldn't To Do The Second Part
//  BuT The First Part i Made it

#include <iostream>
using namespace std;

// This is your function that takes the array of numbers and its size
int minpositive(int nums[], int numsSize)
{
    // We start our tracker at -1. 
    // Think of -1 as a flag that means "I haven't found any positive numbers yet."
    int checkMinNum = -1;
    
    // We start a loop to look at every single number in the array, one by one.
    for (int i = 0; i < numsSize; i++)
    {
        // STEP 1: The Positive Filter
        // We ask: Is the number we are currently looking at greater than 0?
        // (If it is negative or zero, the code ignores it and skips to the next number).
        if(nums[i] > 0)
        {
            // STEP 2: The Smallest Number Check
            // If the number IS positive, we ask two questions:
            // Question A: Is our tracker still exactly -1? (Meaning this is the VERY FIRST positive number we found).
            // OR (||)
            // Question B: Is this new number smaller (<) than the one we already saved in our tracker?
            if(checkMinNum == -1 || nums[i] < checkMinNum)
            {
                // STEP 3: The Update
                // If the answer to Question A OR Question B is "Yes",
                // we erase whatever was in our tracker and save this new number.
                checkMinNum = nums[i];
            }
        }
    }
    // After the loop finishes looking at every number, we return the final answer.
    return checkMinNum;
}


int main()
{
    // We set up our test array. The smallest positive number hidden in here is 5.
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 };
    
    // We calculate how many items are in the array.
    int numssize = size(numbers);
    
    // We run the function and print the answer (which will be 5) to the screen.
    cout << minpositive(numbers, numssize) << "\n";
    
    return 0; 
}