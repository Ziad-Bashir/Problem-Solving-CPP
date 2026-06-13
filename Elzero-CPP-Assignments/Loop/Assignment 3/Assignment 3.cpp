#include <iostream>
using namespace std;

int main()
{
int num1;
int num2;
int Max_Num;
int Min_Num;
cout << "|===== The Numbers Should Be Positive =====|\n";
cout << "Enter The First Number: \n";
cin >> num1;
cout << "Enter The Second Number: \n";
cin >> num2;


if(num1 > 0 && num1 > num2)
{
    Max_Num = num1;
        cout << "The Max Number: " << Max_Num << "\n";
} else if(num2 > 0 && num2 > num1)
{
    Max_Num = num2;
    cout << "The Max Number: " << Max_Num << "\n";
} else if(num1 == num2 && Max_Num > 0)
{
    cout << "The Numbers Equal to each other & That'snot Allowed\n";
} else
{
    cout << "The Numbers Aren't Valid\n";
}



if( num1 > num2 && num2 > 0)
{
    Min_Num = num2;
    cout << "The Min Number: " << Min_Num << "\n";
}else if(num2 > num1 && num2 > 0)
{
    Min_Num = num1;
    cout << "The Min Number: " << Min_Num << "\n";
} else if(num1 == num2 && Min_Num > 0)
{
    cout << "The Numbers Equal to each other & That'snot Allowed\n";
}else
{
    cout << "The Numbers Aren't Valid\n";
}



for(int i = Min_Num + 1; i < Max_Num; i++)
{
    if(i % 2 != 0 && num1 > num2)
    {
        cout << i << "\n";
    } else if (i % 2 != 0 && num2 > num1)
    {
        cout << i << "\n";
    }
}




/*
    Test Case 1
    Number One: 1
    Number Two: 9
    Output: 3, 5, 7

    Test Case 2
    Number One: 2
    Number Two: 15
    Output: 3, 5, 7, 9, 11, 13

    Test Case 3
    Number One: 8
    Number Two: 2
    Output: 3, 5, 7
    */

    return 0;
}