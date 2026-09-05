#include <iostream>
using namespace std;
int main()
{
    int OriginalPrice = 1000;
    float Discount = 0.2;
    float DiscountAmount = OriginalPrice * Discount;
    float FinalPrice = OriginalPrice - DiscountAmount;

    cout << "Discount Amount: " << DiscountAmount << endl;
    cout << "Final Price: " << FinalPrice << endl;
    
    return 0;
} 