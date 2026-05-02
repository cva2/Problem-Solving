#include <iostream>
using namespace std;

int main()
{
  int nums[5];
  
  for(int i = 4; i > -1; i--)
  {
    cin >> nums[i];
  }
  cout << "==================\n";
  cout << nums[0] << endl; 
  cout << nums[1] << endl; 
  cout << nums[2] << endl; 
  cout << nums[3] << endl; 
  cout << nums[4] << endl; 
  
  return 0;
}