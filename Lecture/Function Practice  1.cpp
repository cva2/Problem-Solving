#include <iostream>
using namespace std;

void calc(int num1, int num2, string op)
{
  if(op == "+")
    cout << num1 << " + " << num2 << " = " << num1 + num2;
  if(op == "-")
    cout << num1 << " - " << num2 << " = " << num1 - num2;
  if(op == "*")
    cout << num1 << " * " << num2 << " = " << num1 * num2;
  if(op == "/")
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    
}

int main()
{
  int num1; 
  int num2; 
  string op;
  cin >> num1 >> num2 >> op;
  calc(num1, num2, op);
  
  return 0;
}