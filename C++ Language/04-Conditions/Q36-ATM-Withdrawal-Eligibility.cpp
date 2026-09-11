#include <iostream>
using namespace std;

int main()
{
    int Balance = 10000;
    int WithdrawalAmount = 5000;

    if(WithdrawalAmount > 0 && WithdrawalAmount <= Balance)
    {
        cout << "Withdrawal Successful" << endl;
    }
    else
    {
        cout << "Insufficient Balance or Invalid Amount" << endl;
    }

    return 0;
}