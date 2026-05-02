#include <iostream>
using namespace std;

void menuStu();
void addStu();
void serStu();

class Student
{
  public:
    string name;
    int id;
    float gpa;

};
Student stu[10]{
  {"Anas Ahmed"    , 252072, 3.08},
  {"Ahmed Mostafa" , 256311, 3.21}
};
int numStu = 2;

int main()
{
  int choice1;
  mainStart:
  cout << "\n\n"
          " ===============================================\n"
          "         S T U D E N T   D A T A B A S E\n"
          " ===============================================\n"
          "            E n t e r   T o   S t a r t\n";
  getchar();
  inchoice1:
  cout << "\n\n-----------------------------------------------\n"
          "Hello, Choose From Main Menu:\n"
          " 1- Add New Student\n"
          " 2- Search For A Student By Id\n"
          " 3- Show Student Database\n"
          " 4- Exit\n => ";
  cin >> choice1;
  switch(choice1)
  {
    case 1: addStu(); break;
    case 2: serStu(); break;
    case 3: menuStu(); break;
    case 4: exit(0);
    default: 
      cout << "Incorrect Choice\n"; 
      goto inchoice1;
  }
}












