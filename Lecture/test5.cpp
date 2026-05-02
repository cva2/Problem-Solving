#include <iostream>
using namespace std;

int main()
{
  int nums[] = {100, 200, 300, 400, 500, 600};
  int numsS  = sizeof(nums) / sizeof(nums[0]);
  int i = 5;

  for(;;)
  {
    cout << nums[i] << endl;
    i--;
  }  


  return 0;
}