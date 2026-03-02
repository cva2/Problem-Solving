#include <iostream>
using namespace std;

int main()
{
  int result = 0;
  int num1, num2, num3, num4;
  cout << "Please Type 5 Numbers In A Row\n";
  cout << "Only Even Numbers Smaller Than 30 Will Be Counted\n";
  cin >> num1 >> num2 >> num3 >> num4;

  cout << "Your Accepted Number Is: \n";
  if (num1 < 30 && num1 % 2 == 0)
  {
    cout << num1 << endl;
    result += num1;
  }
  if (num2 < 30 && num2 % 2 == 0)
  {
    cout << num2 << endl;
    result += num2;
  }
  if (num3 < 30 && num3 % 2 == 0)
  {
    cout << num3 << endl;
    result += num3;
  }
  if (num4 < 30 && num4 % 2 == 0)
  {
    cout << num4 << endl;
    result += num4;
  }

  cout << "\n Your Result Is: " << result;




  
  return 0;
}