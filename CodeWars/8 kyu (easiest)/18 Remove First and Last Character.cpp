#include <string>

using namespace std; 

string sliceString (string str)
{
  // your code is here ... Hope You Enjoy !!
  string word = "";
  for(int i = 0; i < str.length(); i++)
  {
    if(i == 0 || i == str.length() - 1 )
    {
      continue;
    }
     word += str[i];
  }
  return word ; 
}