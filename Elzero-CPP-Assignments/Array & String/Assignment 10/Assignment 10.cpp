//  I Made it Write But I Got Helped By Gemini To Correct somethings Based on the Rules
#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    cout << "|=== Method 1 ===|\n";

    cout << "First: " << nums[0] <<"\n";

    // To get the last element dynamically, we calculate it using (total size - 1).
    // Since arrays are 0-indexed, the last element is always one less than the total size.
    cout << "Last: " << nums[nums.size()-1] << "\n";  //  num[6-1] <= num[5]




    cout << "|=== Method 2 ===|\n";

    cout << "First: " << nums.front() << "\n";
    cout << "Last: " << nums.back() << "\n";




    cout << "|=== Method 3 ===|\n";

    cout << "First: " << nums.at(0) << "\n";

    // Just like Method 1, we use (nums.size() - 1) to find the last index dynamically.
    // The difference is that .at() is safer because it checks if the index exists before running.
    cout << "Last: " << nums.at(nums.size()-1) << "\n";  //  num[6-1] <= num[5]


    return 0;
}