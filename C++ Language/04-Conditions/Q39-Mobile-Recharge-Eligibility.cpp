#include <iostream>
using namespace std;

int main()
{
    int Balance = 500;
    int RechargeAmount = 299;

    if(RechargeAmount > 0 && RechargeAmount <= Balance)
    {
        cout << "Recharge Successful" << endl;
    }
    else
    {
        cout << "Insufficient Balance or Invalid Amount" << endl;
    }

    return 0;
}