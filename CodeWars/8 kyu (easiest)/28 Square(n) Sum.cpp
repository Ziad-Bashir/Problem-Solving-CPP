#include <vector>
using namespace std;
int square_sum(vector<int> numbers)
{
  int result = 0;
  for(int i = 0; i < numbers.size(); i++)
  {
    result += (numbers[i] * numbers[i]);
  }
    return result;
}