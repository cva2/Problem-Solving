#include <iostream>
using namespace std;

int main()
{
  int age = 2;

  // #1
  if ( age > 20)
  {
    cout << "Your Age Is Ok\n";
  }
  else
  {
    cout << "Your Age Is Not Ok\n";
  }

  // #2
  cout << (age > 20 ? "Your Age Is Ok\n" : "Your Age Is Not Ok\n" );
  
  
  return 0;
}