#include <iostream>
#include <string.h>
using namespace std;

int main()
{

string fName = "Elzero ";
string mName = "Web ";
string lName = "School";

        cout << "|==== Method 1 ====|\n";
    cout << fName + mName + lName <<"\n";

        cout << "|==== Method 2 ====|\n";
    cout << fName.append(mName) << lName << "\n";

        cout << "|==== Method 3 ====|\n";
    cout << fName << mName << lName << "\n" ;


        cout << "|==== Method 4 < My Way from me > ====|\n";
    char fName_1 []= "Elzero ";
    char mName_1[] = "Web ";
    char lName_1[] = "School";

    cout << strcat(fName_1, mName_1) << lName_1 << "\n";


// Output Needed
// Elzero Web School
// Elzero Web School
// Elzero Web School

    return 0;
}