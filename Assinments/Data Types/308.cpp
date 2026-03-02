#include <iostream>
using namespace std;

int main()
{
  short int a = 100;
  long long int b = 15001500;
  long double c = 100.54565746;
  
    cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    cout << sizeof(c) << " Bytes\n"; // 16 Bytes
}


// // Edit Anything Except Values
// int a = 100;
// int b = 15001500;
// double c = 100.54565746;

// // Do Not Edit
// cout << sizeof(a) << " Bytes\n"; // 2 Bytes
// cout << sizeof(b) << " Bytes\n"; // 8 Bytes
// cout << sizeof(c) << " Bytes\n"; // 16 Bytes