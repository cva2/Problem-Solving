#include <iostream>
using namespace std;

int main()
{
    int Number;
    cout << "Please Type A Number Between 0 And 150\n";
    cin  >> Number;

    if (Number < 10)
    {
        cout << "00" << Number;
    } 
    else if (Number > 10 && Number < 100)
    {
        cout << "0"  << Number;
    }
    else 
    {
        cout << Number;
    }



    return 0;
}