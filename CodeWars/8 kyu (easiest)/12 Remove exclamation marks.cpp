#include <string>
using namespace std;
string removeExclamationMarks(string str){
  //your code here
  string clean = "";
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == '!')
    {
      continue;
    }
    clean += str[i];
  }
  return clean;
}