#include <iostream>
using namespace std;

int main()
{
    int Balance = 20000;
    int WithdrawalAmount = 8000;
    int DailyLimit = 10000;

    if(WithdrawalAmount > 0 &&
       WithdrawalAmount <= Balance &&
       WithdrawalAmount <= DailyLimit)
    {
        cout << "Withdrawal Successful" << endl;
        cout << "Remaining Balance = "
             << Balance - WithdrawalAmount << endl;
    }
    else
    {
        cout << "Withdrawal Denied" << endl;
    }

    return 0;
}