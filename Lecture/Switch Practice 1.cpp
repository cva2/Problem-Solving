#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Write Your Code Price \n";
  cin  >> num;

  switch (num)
  {
    case 1:
    case 2:
      cout << "Your Price Is iPhone ";
      break;
    case 3:
      cout << "Your Price Is Lab ";
      break;
    default:
      cout << "Sorry";
  }
  
  return 0;
}