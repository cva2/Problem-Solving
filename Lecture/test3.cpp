#include <iostream>
using namespace std;

int main()
{
  int Array[]{10, 564, 646, 7987, 550, 546, 46};
  int SA = sizeof(Array) / sizeof(Array[1]);

  cout << SA;


  return 0;
}