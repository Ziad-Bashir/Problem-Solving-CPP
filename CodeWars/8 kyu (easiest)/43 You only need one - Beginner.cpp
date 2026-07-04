#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) 
{
  
  for(int i = 0; i < seq.size(); i++)
  {
    if(seq[i] == elem)
      {
      return true;
      }
  }
 return false;
}