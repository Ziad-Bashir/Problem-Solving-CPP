#include <iostream>
using namespace std;

int main()
{



// Example 1
    int check = 25;
    int nums_c[]{20, 25, 30, 70, 100};

if(nums_c [2] > check)
{
    cout << "{" << nums_c[2] << " + ";
    cout <<  nums_c[3] << "}";
    cout << " = " << nums_c[2] + nums_c[3] << "\n";
}else
{
    cout << "It'snot Accepted\n";
}
// Ouput
// "{30} + {70} = 100"


// Example 2

    int nums_b[]{20, 35, 30, 70, 100};

if(nums_b [1] > check)
{
    cout << "{" << nums_b[1] << " + ";
    cout <<  nums_b[3] << "}";
    cout << " = " << nums_b[1] + nums_b[3] << "\n";
}

// Ouput
// "{35} + {70} = 105"


// Example 3

int nums[]{40, 20, 30, 70, 100};


if(nums [0] > check)
{
    cout << "{" << nums[0] << " + ";
    cout <<  nums[3] << "}";
    cout << " = " << nums[0] + nums[3] << "\n";
}

// Ouput
// "{40} + {70} = 110"









    return 0;
}