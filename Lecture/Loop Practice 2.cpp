#include <iostream>
using namespace std;

int main()
{
  int numG = 5;
  int num;
  int Try  = 3;
  
  cout << "Guess The Number, You Have Only Three Chances\n";
  
  for(int i = 0; i < Try;)
  {
    cin >> num;
    if(numG == num)
    {
      cout << "True Number\n";
      break;
    } else {
      cout << "False\n";
      i++;
      cout << "There Are Only " << Try - i << "Trys " << endl;
    }
    if(i == 4)
      break;

  }
  
  return 0;
}