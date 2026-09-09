#include <iostream>
using namespace std;

int main()
{
    int Age = 25;

    if(Age < 18)
    {
        cout << "Not Eligible" << endl;
    }
    else if(Age < 60)
    {
        cout << "Eligible Adult" << endl;
    }
    else
    {
        cout << "Eligible Senior Citizen" << endl;
    }

    return 0;
}