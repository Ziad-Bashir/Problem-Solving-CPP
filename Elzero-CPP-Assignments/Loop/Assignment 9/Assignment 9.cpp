#include <iostream>
using namespace std;

int main()
{


    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
            cout << "|===== Loop For Way =====|\n";
        
            for(int i = 1; i < 3; i++)
            {
                cout << friends[i] << "\n";
            }


    // Output Needed
    // "Mohamed"
    // "Sayed"


            cout << "|===== Loop While Way =====|\n";
            int i = 1;
            while (i < 3)
            {
                cout << friends[i] << "\n";
                i++;
            }

    // Output Needed
    // "Mohamed"
    // "Sayed"

    return 0;
}