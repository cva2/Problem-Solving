#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  cout << "Your Number Is: " << a << endl;

  if (a % 2 == 0)
    cout << "Your Number Is Even\n";
  else 
    cout << "Your Number Is Odd\n";
    
  
  return 0;
}
