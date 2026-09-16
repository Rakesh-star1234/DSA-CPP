#include <iostream>
using namespace std;

int main()
{
    int Balance = 10000;
    int WithdrawalAmount = 6000;
    int MinimumBalance = 2000;

    if(WithdrawalAmount > 0 &&
       WithdrawalAmount <= Balance &&
       Balance - WithdrawalAmount >= MinimumBalance)
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