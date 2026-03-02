#include <iostream>
using namespace std;

int main()
{
    int Age    = 40 ;
    int Points = 100;

    if (Age > 18 && Points > 50 && sizeof(Age) == 4)
    {
        cout << "Age Is Ok\nPoint Is Ok\nAge Data Is 4 Bytes\n";
    }


    return 0;
}