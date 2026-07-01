#include <string>
using namespace std;
string reverseString(string str)
{
  string reverse = "";
  for(int i = str.length() - 1; i >= 0; i--)
  {
    reverse += str[i];
  }
    return reverse;
}