#include <iostream>
using namespace std;

int main()
{
  int num1, num2, op;
  cout << "Write Your Numbers\n";
  cin  >> num1 >> num2;
  cout << "Write Your Operator\n";
  cout << "Hint \n( 1 => + ) \n( 2 => - ) \n( 3 => * ) \n( 4 => / )\n";
  cin  >> op;

  switch (op)
  {
    case 1:
      cout << "Your Answer Is " << num1 + num2;
      break;
    case 2:
      cout << "Your Answer Is " << num1 - num2;
      break;
    case 3:
      cout << "Your Answer Is " << num1 * num2;
      break;
    case 4:
      cout << "Your Answer Is " << num1 / num2;
      break;
  }


  
  return 0;
}