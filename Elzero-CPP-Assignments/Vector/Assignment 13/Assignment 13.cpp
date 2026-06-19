#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Write Your Function Here
int add(vector<int> numsVec)
{
int result = 0;
for(int i = 0; i < numsVec.size(); i++)
{
    result += numsVec[i];
}
return result;
}

int main()
{
    vector<int> numbersone = { 10, 20, 30 };
    vector<int> numberstwo = { 5, 15, 25 };

    cout << add(numbersone) << "\n"; // 60
    cout << add(numberstwo) << "\n"; // 45

    return 0;
}