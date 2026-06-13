    //  Struggled with the business rules, not the programming logic. Used Gemini to clarify the domain knowledge (Net Profit equation) before coding.
#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int totalPhones, int usedPhones, int newPhonePrice, int taxPercentage)
{

int newPhones = totalPhones - usedPhones;
int usedPhonePrice = newPhonePrice - 200;
int totalRevenue = (newPhones * newPhonePrice) + (usedPhones * usedPhonePrice);
int taxAmount = totalRevenue * (taxPercentage / 100.0);
int netProfit = totalRevenue - taxAmount;
    return netProfit;
}

int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}