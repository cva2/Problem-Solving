#include <iostream>
#include <array>
using namespace std;

int myMn(int list[] = {})
{
  int min = -10;
  for(int i = 0; i < 6; i++)
  {
    if(list[i] > min && list[i] < 0)
      min = list[i];
  }
  return min;
}

int myMx(int list[] = {})
{
  int max = 10;
  for(int i = 0; i < 6; i++)
  {
    if(list[i] > max)
      max = list[i];
      
  }
  return max;
}

int main()
{
  cout << myMn(1, -20, -5, 0, 10, -30);
  cout << myMx(1, -20, -5, 0, 10, -30);
  return 0;
}