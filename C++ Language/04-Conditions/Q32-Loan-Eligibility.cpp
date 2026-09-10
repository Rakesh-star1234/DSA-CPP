#include <iostream>
using namespace std;

int main()
{
    int Salary = 50000;
    int CreditScore = 750;
    int Age = 30;

    if(Salary >= 30000 && CreditScore >= 700 && Age >= 21)
    {
        cout << "Eligible for Loan" << endl;
    }
    else
    {
        cout << "Not Eligible for Loan" << endl;
    }

    return 0;
}