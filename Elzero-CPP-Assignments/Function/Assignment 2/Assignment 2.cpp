// I Did This Assignment With Gemini || Gemini Didn't Write The Code But Guided me
// Because This Assignment Was Somehow Tricky || & I Understand it
#include <iostream>
using namespace std;

// Write Your Function Here


float money(float salary, int NumOfDays)
{
    int Full_Weeks = NumOfDays / 7;  // Here We Divide The Number of Days To See How Many Weeks We Have
    int Holidays = Full_Weeks * 2;  // Here We Muiltiplied The The Number of Weeks in "2" To See How Many Hoildays We Have
    int ActualDays = NumOfDays - Holidays; //  Here We Make "NumOfDays - Holidays" To See The Acual Days

    cout << "Money Needed Per Day: ";
    return (salary / ActualDays);
}


int main()
{
    /*
        Hints
        21 Days Has 3 "Weeks"
        Every "Week" You Have 2 Holidays.
        Total = 3 * 2 = 6 Holidays From 21 Days
    */
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    cout << money(15000, 30) << "\n";  
    cout << money(6000, 30) << "\n";  
    return 0;
}