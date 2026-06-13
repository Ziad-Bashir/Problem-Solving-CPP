//  I Used Gemeini in Some Cases Because  it Was Tricky But I Understood it || The Problem Was in When come to "cout"
#include <iostream>
using namespace std;

int main()
{




    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 4 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;




        /*
            Your previous mistake was writing the line like this:
            result += num1 << "\n";
            
            What was the error?
            1. The variable 'result' is of type 'int' (which is strictly for numbers).
            2. The symbol "\n" (new line) is a string/text. 
            3. The '<<' operator is the stream insertion operator used specifically 
                to send data to the display screen (with 'cout'). It cannot be used 
                inside a mathematical addition and assignment operation (+=).
                
            The Fix:
            Keep the addition as a pure math operation inside the 'if' condition, 
            and leave the printing to the screen for the very end.
            */





    if(num1 % 2 == 0 && num1<20)
    {
        // cout<<"The Result is = "<<result += num1<<"\n";      //  Here is The Problem  When I came  To "cout"  & it's Wrong
        result += num1;     //  Here's The Variable "result" Has Been Added To it , The Value of num1 || if its Condition Achieved
    }    if(num2 % 2 == 0 && num2<20)
    {
        result += num2;     //  Here's The Variable "result" Has Been Added To it , The Value of num2 || if its Condition Achieved
    }    if(num3 % 2 == 0 && num3<20)
    {
        result += num3;     //  Here's The Variable "result" Has Been Added To it , The Value of num3 || if its Condition Achieved
    }    if(num4 % 2 == 0 && num4<20)
    {
        result += num4;     //  Here's The Variable "result" Has Been Added To it , The Value of num4 || if its Condition Achieved
    }

    cout<<"The Total Result = ";
    cout <<result <<"\n" ;



    /*
    Test Case 1
    Numbers => 15, 16, 22, 8
    Result => 24

    "Explain"
    Starting Result Is 0
    [Number 1] 15 => Not Even Number
    [Number 2] 16 => Smaller Than 20 And Even Number
    0 + 16 = 16
    [Number 3] 22 => Not Smaller Than 20
    [Number 4] 8  => Smaller Than 20 And Even Number
    16 + 8 = 24

    =================================

    Test Case 2
    Numbers => 100, 11, 12, 18
    Result => 30

    "Explain"
    Starting Result Is 0
    [Number 1] 100 => Not Smaller Than 20
    [Number 2] 11  => Not Even Number
    [Number 3] 12  => Smaller Than 20 And Even Number
    0 + 12 = 12
    [Number 4] 18  => Smaller Than 20 And Even Number
    12 + 18 = 30
    */




    return 0;
}