#include <string>

std::string no_space(const std::string& x)
{
  std::string word = "";
  for(int i = 0; i < x.length(); i++)
  {
    if(x[i] != ' ')
    {
    word += x[i];
    }
  }
   return word;
}