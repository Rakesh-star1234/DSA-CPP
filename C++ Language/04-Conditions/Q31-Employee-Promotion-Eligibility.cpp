#include <iostream>
using namespace std;

int main()
{
    int Salary = 45000;
    int Experience = 5;
    int PerformanceRating = 4;

    if(Salary >= 40000 && Experience >= 4 && PerformanceRating >= 4)
    {
        cout << "Eligible for Promotion" << endl;
    }
    else
    {
        cout << "Not Eligible for Promotion" << endl;
    }

    return 0;
}