#include <iostream>
using namespace std;

int main()
{
    int Age = 25;

    if(Age < 13)
    {
        cout << "Child" << endl;
    }
    else if(Age <= 19)
    {
        cout << "Teenager" << endl;
    }
    else if(Age <= 59)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Senior Citizen" << endl;
    }

    return 0;
}