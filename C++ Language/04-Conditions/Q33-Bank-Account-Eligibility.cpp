#include <iostream>
using namespace std;

int main()
{
    int Age = 25;
    int MonthlyIncome = 35000;

    if(Age >= 21 && MonthlyIncome >= 30000)
    {
        cout << "Eligible for Premium Account" << endl;
    }
    else
    {
        cout << "Not Eligible for Premium Account" << endl;
    }

    return 0;
}