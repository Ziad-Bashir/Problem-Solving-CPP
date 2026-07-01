#include <string>

std::string to_alternating_case(const std::string& str)
{
  std::string result = "";
  for(int i = 0; i < str.length(); i++)
{
  if(isupper(str[i]))
  {
    result += tolower(str[i]);
  }else if(islower(str[i]))
  {
   result += toupper(str[i]); 
  }else
  {
    result += str[i];
  }                      
}               
  //  I have To Make it With That Way Cuz
  // If I Did it Like That  tolower(str[i]) then result = tolower(str[i])
  // It's not Gonna Work
  // Cuz It's Gonna Assign Each Letter & Remove What Before it
return result;
}