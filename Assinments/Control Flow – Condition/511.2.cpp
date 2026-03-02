#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Write Your Event Your\n";
  cin  >> year;

  switch (year)
  {
    case 1982:
      cout << "My Birth Day";
      break;
    case 1989:
      cout << "My Birth Day";
      break;
    case 1995:
      cout << "Windows 95";
      break;
    case 2000:
      cout << "Windows Millennium";
      break;
    case 2002:
      cout << "Created My vBulletin Forum";
      break;
    default:
     cout << "No Events in This Year";
  }
  
  /*
    "My Birth Day"
    "My First Work"
    "Windows 95"
    "Windows Millennium"
    "Created My vBulletin Forum"
No Events in This Year"
  */
  
  return 0;
}