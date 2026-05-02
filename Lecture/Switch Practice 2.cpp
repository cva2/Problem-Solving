#include <iostream>
using namespace std;

int main()
{
  int price = 100;
  int discount = 5;
  int rank;
  cout << "Write The Rank To Get Your Discount \n";
  cin  >> rank;
  
  switch (rank)
  {
    case 4:
      discount *= 4;
      break;
    case 5:
      discount *= 5;
      break;
    case 6:
      discount *= 6;
      break;
    case 7:
      discount *= 8;
      break;
    case 8:
      discount *= 8;
      break;
    case 9:
      discount *= 9;
      break;
      default:
        cout << "your rank is rong";
  }
    cout << price - discount;
  
  
  return 0;
}
