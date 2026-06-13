// This Assignment it Was Hard to me  || Beacuse this type of Questions I Cann't Handle with it Yet
#include <iostream>
using namespace std;

int main()
{
        cout << "|===== Loop For Way < My Solving > =====|\n";
        for(int i = 1; i >= 0; i--)
        {
        cout << i;
        
        }

        for(int i = 1; i >= 0;)
        {
                cout << "\n";
                cout << i;
                i--;
                cout << i;
                cout << i;
                if(i == 0)
                {
                        break;
                }
        }

                for(int i = 1; i >= 0;)
        {
                cout << "\n";
                cout << i;
                i--;
                cout << i;
                cout << i;
                cout << i;
                cout << i;
                if(i == 0)
                {
                        break;
                }
        }


                                for(int i = 1; i >= 0;)
        {
                cout << "\n";
                cout << i;
                i--;
                cout << i;
                cout << i;
                cout << i;
                cout << i;
                cout << i;
                cout << i;
                cout << i;
                if(i == 0)
                {
                        break;
                }
        }

// Output Needed
// 10
// 100
// 10000
// 100000000


        cout << "\n|===== Loop For Way < Gemini Way > =====|\n";

        // Start with 1 zero for the first line
        int zeroCount = 1; 

        // We need 4 rows of output, so we loop 4 times
        for(int row = 0; row < 4; row++) {
                
                // Every line starts with a '1'
                cout << "1"; 

                // This inner loop prints the '0's
                for(int j = 0; j < zeroCount; j++) {
                cout << "0";
                }

                // Move to the next line after printing the 1 and the 0s
                cout << "\n"; 
                
                // Multiply the number of zeros by 2 for the next row
                zeroCount *= 2; 
        }




        cout << "\n|===== Loop While Way < My Solving > =====|\n";

        int y = 1;
        while(y >= 0)
        {
                cout << y;
                y--;
                cout << y;
                if(y == 0)
                {
                        break;
                }
        }
cout << "\n";
        int k = 1;
        while(k >= 0)
        {
                cout << k;
                k--;
                cout << k;
                cout << k;
                if(k == 0)
                {
                        break;
                }
        }
cout << "\n";
                int j = 1;
        while(j >= 0)
        {
                cout << j;
                j--;
                cout << j;
                cout << j;
                cout << j;
                cout << j;
                if(j == 0)
                {
                        break;
                }
        }
cout << "\n";
                        int z = 1;
        while(z >= 0)
        {
                cout << z;
                z--;
                cout << z;
                cout << z;
                cout << z;
                cout << z;
                cout << z;
                cout << z;
                if(z == 0)
                {
                        break;
                }
        }

                cout << "\n|===== Loop While Way < Gemini Way > =====|\n";


        int row = 0;         // Keeps track of which line we are on
        int zeroCount2 = 1;   // Starts with 1 zero for the first line

        // Outer loop: Runs 4 times for the 4 rows
        while (row < 4) {
                
                cout << "1";     // Print the starting '1'
                
                int j = 0;       // Counter for the zeros
                
                // Inner loop: Prints '0' exactly zeroCount2 times
                while (j < zeroCount2) {
                cout << "0";
                j++;
                }
                
                cout << "\n";    // Move to the next line
                
                zeroCount2 *= 2;  // Double the zeros for the next round
                row++;           // Move to the next row
        }


// Output Needed
// 10
// 100
// 10000
// 100000000
        return 0;
}