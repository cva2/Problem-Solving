#include <iostream>
using namespace std;

int main()
{
  int Points;
  cin >> Points;
  cout << "Your Points is " << Points << endl;
  
  if (Points > 0 && Points <= 500)
  {
    cout << "Not Bad";
  } 
  else if (Points > 500 && Points <= 1000)
  {
   cout << "Perfect";
  } 
  else
  {
    cout << "Your Are VIP";
  }
  
  return 0;
}