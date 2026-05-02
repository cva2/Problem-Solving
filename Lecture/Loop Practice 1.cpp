#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 30, 13, -25, 45, 32, -13};
  int numsS  = sizeof(nums) / sizeof(nums[1]);
  int numsC  = 0;
  
  for(int i = 0; i < numsS; i++)
  {
    if(nums[i] < 0 || nums[i] % 2 == 1)
    {
      continue;
    }
    numsC += nums[i];
  }

  cout << numsC;
  
  return 0;
}