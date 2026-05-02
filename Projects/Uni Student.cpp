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
           << stu[i].name;
    else
      cout << " "  << i + 1 << " | "
           << stu[i].name;

    
    int spacesn = 20 - stu[i].name.length();
    for(int i = 0; i < spacesn; i++)
      cout << " ";

    cout << " | " << stu[i].id << "   | "
         << stu[i].gpa << endl;

    
  }
  cout << "===============================================\n"
          "                 S T U D E N T S\n"
          "===============================================\n";
}

void addStu()
{
  int choice1, choice2;
  readd:
  cout << "-----------------------------------------------\n"
  "Now Enter The Name Of The Student..\n => ";
  cin.ignore(1, '\n');
  getline(cin, stu[numStu].name);
  while (isdigit(stu[numStu].name[0])) // Check If He Start With Integet
  {
    cout << "Error: Can't Start With Number, ReEnter..\n => ";
    getline(cin, stu[numStu].name);
  }
  cout << "-----------------------------------------------\n"
          "Enter ID..\n => ";
  cin >> stu[numStu].id;
  cout << "-----------------------------------------------\n"
          "Finaly Enter GPA..\n => ";
  cin >> stu[numStu].gpa;
  numStu++;
  cout << "\n\n"
          " -----------------------------------------------\n"
          "            Student Added Successfully\n"
          " -----------------------------------------------\n\n";


  inchoice1:
  cout << "-----------------------------------------------\n"
          "Now What Is Next:\n"
          " 1- Show Student Menu\n"
          " 2- Add Another Student\n"
          " 3- Back To Main\n"
          " 4- Exit\n => ";
  cin >> choice1;
  switch(choice1)
  {
    case 1:
    {
      menuStu();
      inchoice2:
      cout << "-----------------------------------------------\n"
              "Ok, What Is Next:\n"
              " 1- Add Another Student\n"
              " 2- Back To Main\n"
              " 3- Exit\n => ";
      cin >> choice2;
      switch(choice2)
      {
        case 1: goto readd;
        case 2: main(); return;
        case 3: exit(0);
        default: cout << "Incorrect Choice\n"; goto inchoice2;
      }
      return;
    }
    case 2: goto readd; break;
    case 3: main(); return;
    case 4: exit(0);
    default: 
      cout << "Incorrect Choice\n"; 
      goto inchoice1;
  }
}

void serStu()
{
  char choice2;
  int choice1, idCheck, index, j;
  research:
  cout << "-----------------------------------------------\n"
          "Enter ID Of Student..\n => ";
  cin >> idCheck;
  for(int i = 0; i < numStu; i++)
  {
    if(stu[i].id == idCheck)
    {
      index = i;
      { // Show THis Student
        cout << "-----------------------------------------------\n";
        if(i < 10)
          cout << "  " << i + 1 << " | "
               << stu[i].name;
        else
          cout << " "  << i + 1 << " | "
               << stu[i].name;

        int spacesn = 20 - stu[i].name.length();
        for(int i = 0; i < spacesn; i++)
          cout << " ";
      
        cout << " | " << stu[i].id << "   | "
             << stu[i].gpa << endl;

        cout << "-----------------------------------------------\n";
      }
      inchoice1:
      cout << "What Is After:\n"
              " 1- Search For Anther Student\n"
              " 2- Back To Main\n"
              " 3- Exit\n => ";
      cin >> choice1;
      switch(choice1)
      {
        case 1: goto research;
        case 2: main(); return;
        case 3: exit(0);
        default:
          cout << "Incorrect Choice\n"; 
          goto inchoice1;
      }
    }
  }
  j++;
  if(j == 2)
    cout << "---------!! Final Try !!---------\n";
  else if(j == 3)
  {
    cout << " -----------------------------------------------\n"
            "              S I G N E D    O U T\n"
            " -----------------------------------------------\n\n";
    main();
    return;
  }
  inchoice2:
  cout << "There Are No Student Has This Id\n"
          "Need To Search Again? (Y/N)\n => ";
  cin >> choice2;
  switch(choice2)
  {
    case 'Y':
    case 'y': goto research;
    case 'N':
    case 'n': main(); return;
    default:
      cout << "Incorrect Choice\n"; 
      goto inchoice2;
  }
  

}










