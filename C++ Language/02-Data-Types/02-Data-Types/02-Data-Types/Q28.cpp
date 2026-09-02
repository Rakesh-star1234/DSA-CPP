#include <iostream>
using namespace std;
int main()
{
    float price=799.100;
    int Quantity=3;
    float Discount=10.0;
    float TotalPrice = price * Quantity;
    float DiscountAmount = TotalPrice * Discount / 100;
    float Finalprice = TotalPrice - DiscountAmount;
    cout << "Total Price: " << TotalPrice << endl;
    cout << "Discount Amount: " << DiscountAmount << endl;
    cout << "Final Price: " << Finalprice << endl;
    return 0;
} 