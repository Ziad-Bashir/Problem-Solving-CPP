#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smallBooks, int MediumBooks, int BigBooks, int NumOfshield)
{
    int Total_Books_Area = (smallBooks * 2) + (MediumBooks * 4) + (BigBooks * 6);
    int Total_Shelf_Area = (NumOfshield * 20);
    int rest;
    if(Total_Shelf_Area < Total_Books_Area)
    {
        return 0;
    } else if(Total_Shelf_Area >= Total_Books_Area)
    {
        rest = Total_Shelf_Area - Total_Books_Area;
    }
    return rest;
}
//  Every shield Includes 20 Area
//  Total_Shelf_Area = 4 * 20 == 80
//  smallBooks's Area = 10 * 2 == 20
//  MediumBooks's Area = 4 * 4 == 16
//  BigBooks's Area = 3 * 6 == 18
//  Total_Books_Area = 54

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}