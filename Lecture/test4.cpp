#include <iostream>
using namespace std;

int main()
{
  int A[3][3] = {{55, 84, 91}, {41, 84, 57}, {74, 65, 92}};
  cout << A[1][0] << "\n"; // 41
  cout << A[2][2] << "\n"; // 92
  cout << A[0][0] << "\n"; // 55
  return 0;
}