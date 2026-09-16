#include <iostream>
using namespace std;

int main()
{
    float PurchaseAmount = 8000;
    float Discount;
    float FinalAmount;

    if(PurchaseAmount >= 10000)
    {
        Discount = 20;
    }
    else if(PurchaseAmount >= 5000)
    {
        Discount = 10;
    }
    else
    {
        Discount = 5;
    }

    FinalAmount = PurchaseAmount - (PurchaseAmount * Discount / 100);

    cout << "Discount = " << Discount << "%" << endl;
    cout << "Final Amount = " << FinalAmount << endl;

    return 0;
}