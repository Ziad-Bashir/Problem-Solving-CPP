//  I Just Took A Hint From Gemini
#include <iostream>
using namespace std;

int main()
{



    int num;
    cout << "Please Type A Number Between 0 And 150 = ";
    cin >> num;


    if(num < 10)
    {
        cout<<"The Output is = 00"<<num<<"\n";
    }else if(100 > num && num >10)
    {
        cout<<"The Output is = 0"<<num<<"\n";
    } else if(num>100)
    {
        cout<<"The Output is = "<<num<<"\n";
    }
                    //  My Mistake 
// if(100 > num > 10) fails because C++ reads it left-to-right:
// 1. (100 > num) becomes either 1 (true) or 0 (false).
// 2. Then it checks (1 > 10) or (0 > 10), which is ALWAYS false.
// 
// Fix: Separate them with AND (&&) -> if(100 > num && num > 10)








// If Number Smaller Than 10 "Example 5" Output Will Be => 005
// If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
// If Number Larger Than 100 "Example 115" Output Will Be => 115





    return 0;
}