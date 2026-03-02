#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Please Type A Number Between 0 And 150\n";
  cin >> num;
  
  if (num >= 0 && num < 10)
  {
    cout << "Your Number Is: 00" << num;
  }
  if (num >= 10 && num < 100)
  {
    cout << "Your Number Is: 0" << num;
  }
  if (num >= 100 && num <= 150)
  {
    cout << "Your Number Is: " << num;
  }

  // If Number Smaller Than 10 "Example 5" Output Will Be => 005
  // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
  // If Number Larger Than 100 "Example 115" Output Will Be => 115
  
  return 0;
}