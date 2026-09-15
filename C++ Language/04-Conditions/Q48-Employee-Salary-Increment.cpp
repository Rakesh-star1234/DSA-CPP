#include <iostream>
using namespace std;

int main()
{
    float Salary = 40000;
    int Experience = 6;
    float Increment;
    float NewSalary;

    if(Experience >= 5)
    {
        Increment = 20;
    }
    else if(Experience >= 3)
    {
        Increment = 10;
    }
    else
    {
        Increment = 5;
    }

    NewSalary = Salary + (Salary * Increment / 100);

    cout << "Increment = " << Increment << "%" << endl;
    cout << "New Salary = " << NewSalary << endl;

    return 0;
}