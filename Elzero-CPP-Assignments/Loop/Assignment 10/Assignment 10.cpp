#include <iostream>
using namespace std;

int main()
{


// Friends Array
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
            cout << "|===== Loop For Way =====|\n";
    for(int i = 0; i < 5; i++)
    {
        if(friends[i] == "Mohamed" || friends[i] == "ameer")
        {
        continue;
        }
    cout << friends[i] << "\n";
    }

// Output Needed
// "Ahmed"
// "Ashraf"
// "Amany"


        cout << "|===== Loop While Way =====|\n";
        int i = 0;
        while (i < 5)
        {
        if(friends[i] == "Mohamed" || friends[i] == "ameer")
        {
        i++;
        continue;
        }
        cout << friends[i] << "\n";       // ✅ If the name wasn't Mohamed or ameer, print it to the screen
        i++;           //  Move to the next index to get ready for the next loop cycle
        }
        

    return 0;
}