#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    int n1, n2, n3, n4;
    cout << "Please Type 4 Numbers In A Row\n";
    cin  >> n1 >> n2 >> n3 >> n4;

    if (n1 < 20 && n1 % 2 == 0)
    {
        result += n1;
    }

    if (n2 < 20 && n2 % 2 == 0)
    {
        result += n2;
    }

    if (n3 < 20 && n3 % 2 == 0)
    {
        result += n3;
    }

    if (n4 < 20 && n4 % 2 == 0)
    {
        result += n4;
    }

    cout << result;


    return 0;
}