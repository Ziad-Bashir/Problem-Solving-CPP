#include <vector>
using namespace std;

int min(vector<int> list)
{
   int  minimum = list[0];
  for(int i = 0; i < list.size(); i++)
  {
    if(minimum > list[i])
    {
      minimum = list[i];
    }                                                                                                                                                                                                       
  }
    return minimum;
}


int max(vector<int> list)
{
       int  maximum = list[0];
  for(int i = 0; i < list.size(); i++)
  {
    if(maximum  < list[i])
    {
      maximum  = list[i];
    }
  }
    return maximum ;

}