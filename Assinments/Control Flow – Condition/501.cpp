#include <iostream>
using namespace std;

int main()
{
    int   Age    = 40  ;
    int   Points = 800 ;
    float Rate   = 8.5f;
    if (Age > 18)
    {
        if (Points > 500)
        {
            if (Rate > 5)
            {
                cout << "Yes Age > 18 & Points > 500 & Rate > 5";
            }
        }
    }

    cout << "\n========================================\n";

    if (Age > 18 && Points > 500 && Rate > 5)
    {
        cout << "Yes Age > 18 & Points > 500 & Rate > 5";

    }


    return 0;
}