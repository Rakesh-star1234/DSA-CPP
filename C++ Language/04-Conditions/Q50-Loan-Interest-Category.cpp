#include <iostream>
using namespace std;

int main()
{
    float LoanAmount = 500000;
    int CreditScore = 760;
    float InterestRate;
    float AnnualInterest;

    if(CreditScore >= 750)
    {
        InterestRate = 7;
    }
    else if(CreditScore >= 700)
    {
        InterestRate = 9;
    }
    else
    {
        InterestRate = 12;
    }

    AnnualInterest = LoanAmount * InterestRate / 100;

    cout << "Interest Rate = " << InterestRate << "%" << endl;
    cout << "Annual Interest = " << AnnualInterest << endl;

    return 0;
}