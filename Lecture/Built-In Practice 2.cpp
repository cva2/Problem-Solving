#include <iostream>
#include <array>
#include <cctype>
using namespace std;

int main()
{
  string name = "ElZEro";
  int nameS   = name.size();

  for (int i = 0; i < nameS; i++)
  {
    if (isupper(name[i]))
      cout << char(tolower(name[i])) << endl;
    else
      cout << char(toupper(name[i])) << endl;
    
  }
  return 0;
}