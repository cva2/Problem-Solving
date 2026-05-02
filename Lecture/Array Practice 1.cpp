#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  int Points = 0;
  int Numbers[4][4] = {
    {12, 19, 26, 33},
    {3, 9, 27, 81}, 
    {57, 44, 31, 18}, 
    {625, 125, 25, 5}
  };
  

  cout << "Now We Will Play Small Game\n";
  cout << "There Are A Lot Of Numbers\n";
  cout << "You Need Guess The Last Number\n\n";
  cout << "|================================|\n";
  
  cout << "\nNow The First Question\n Guess:\n";
  cout << "{ 12 , 19 , 26 , ?? }\n";
  cin  >> a;
  if(a == Numbers[0][3])
  {
    Points++;
    cout << "|==| True |==| ";
  } else {
    cout << "|==| False |==| ";
  }
  
  cout << "\n\nNow The Second Question\n Guess:\n";
  cout << "{ 3, 9, 27, ?? }\n";
  cin  >> b;
  if(b == Numbers[1][3])
  {
    Points++;
    cout << "|==| True |==| ";
  } else {
    cout << "|==| False |==| ";
  }
  
  cout << "\n\nNow The Third Question\n Guess:\n";
  cout << "{ 57, 44, 31, ?? }\n";
  cin  >> c;
  if(c == Numbers[2][3])
  {
    Points++;
    cout << "|==| True |==| ";
  } else {
    cout << "|==| False |==| ";
  }
  
  cout << "\n\nAnd The Final Question\n Guess:\n";
  cout << "{ 625, 125, 25, ?? }\n";
  cin  >> d;
  if(d == Numbers[3][3])
  {
    Points++;
    cout << "|==| True |==| ";
  } else {
    cout << "|==| False |==| ";
  }
  
  cout << "\n\n\n|=====Thanks=====|\n";
  cout << "Your Points Is: " << Points;
  cout << "\n|=====Thanks=====|\n";
  


  


    
  return 0;
}
