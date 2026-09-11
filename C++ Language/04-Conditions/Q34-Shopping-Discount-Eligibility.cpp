#include <iostream>
using namespace std;

int main()
{
    int PurchaseAmount = 5500;
    int MembershipYears = 2;

    if(PurchaseAmount >= 5000 && MembershipYears >= 2)
    {
        cout << "Eligible for Special Discount" << endl;
    }
    else
    {
        cout << "Not Eligible for Special Discount" << endl;
    }

    return 0;
}