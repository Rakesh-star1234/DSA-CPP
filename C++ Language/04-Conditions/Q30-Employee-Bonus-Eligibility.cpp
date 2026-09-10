#include <iostream>
using namespace std;

int main()
{
    int Salary = 35000;
    int Experience = 4;

    if(Salary >= 30000 && Experience >= 3)
    {
        cout << "Eligible for Bonus" << endl;
    }
    else
    {
        cout << "Not Eligible for Bonus" << endl;
    }

    return 0;
}