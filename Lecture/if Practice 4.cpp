#include <iostream>
using namespace std
int main()
{
  int num1, num2, op;

  cout << "Enter Your Tow Numbers\n";
  cin  >> num1 >> num2; 

  cout << "Enter Your Op\n";
  cout << "Hint ( 1 => + ) | ( 2 => - ) | ( 3 => * ) | ( 4 => / )\n";
  cin  >> op;

       if (op == 1)
    cout << "Your Answer Is " << num1 + num2;
  else if (op == 2)
    cout << "Your Answer Is " << num1 - num2;
  else if (op == 3)
    cout << "Your Answer Is " << num1 * num2;
  else if (op == 4)
    cout << "Your Answer Is " << num1 / num2;
  
  return 0;
}
