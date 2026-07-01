#include <string>
using namespace std;
std::string repeat_str(size_t repeat, const std::string& str) {
    string repeatedword = "";
  for(int i = 1; i <= repeat; i++)
  {
    repeatedword += str;
  }
  return repeatedword;
}
