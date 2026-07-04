#include <string>

std::string makeUpperCase(const std::string& str) {
  // write code here.
 std::string result = "";
  for(int i = 0; i < str.length(); i++)
  {
     result += toupper(str[i]);
  }
 
  return result;
}