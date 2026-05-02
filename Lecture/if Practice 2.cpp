#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << "Your Numbers Is: " << a << ", " << b << ",And " << c << "\n";
  
  if (a > b)
  {
    if (a > c)
    {
      cout << a << " Is The Greatest Number\n";
    }
    else
    {
      cout << c << " Is The Greatest Number\n";
    }
  }
  else 
  {
    if (b > c)
    {
      cout << b << " Is The Greatest Number\n";
    }
    else
    {
      cout << c << " Is The Greatest Number\n";
    }
  }
  return 0;
}
