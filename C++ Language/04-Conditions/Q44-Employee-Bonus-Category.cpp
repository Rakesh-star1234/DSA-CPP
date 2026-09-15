#include <iostream>
using namespace std;
int main()
{
    int Salary = 42000;
    int Experience = 6;

    if(Salary >= 50000 && Experience >= 5)
    {
        cout << "High Bonus" << endl;
    }
    else if(Salary >= 30000 && Experience >= 3)
    {
        cout << "Medium Bonus" << endl;
    }
    else
    {
        cout << "Low Bonus" << endl;
    }

    return 0;
}