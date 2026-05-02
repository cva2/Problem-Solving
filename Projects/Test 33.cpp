#include <iostream>
using namespace std;


class Student
{
  public:
    string name;
    int id;
    float gpa;
    int stu[10];
    int numStu = 2;

    Student()
    {
      stu[10] = 
      {
        {"Anas Ahmed"    , 252072, 3.08},
        {"Ahmed Mostafa" , 256311, 3.21}
      };
    }
    void menuStu()
    {
      cout << "\n"
        "===============================================\n"
        "                 S T U D E N T S\n"
        "===============================================\n"
        " No | Name                 | ID       | GPA\n"
        "-----------------------------------------------\n";
      for(int i = 0; i < numStu; i++)
      {
        if(i < 10)
          cout << "  " << i + 1 << " | "
               << ob1[i].name;
        else
          cout << " "  << i + 1 << " | "
               << name;
      

        int spacesn = 20 - ob1[i].name.length();
        for(int i = 0; i < spacesn; i++)
          cout << " ";
      
        cout << " | " << ob1[i].id << "   | "
             << ob1[i].gpa << endl;
      

      }
      cout << "===============================================\n"
              "                 S T U D E N T S\n"
              "===============================================\n";
    }

};

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
    // case 1: stu.addStu(); break;
    // case 2: serStu(); break;
    case 3: ob1.menuStu(); break;
    case 4: exit(0);
    default: 
      cout << "Incorrect Choice\n"; 
      goto inchoice1;
  }
}












