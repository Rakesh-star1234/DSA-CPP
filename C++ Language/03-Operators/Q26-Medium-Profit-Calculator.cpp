#include <iostream>
using namespace std;

int main()
{
    int CostPrice = 1000;
    int SellingPrice = 1500;

    int Profit = SellingPrice - CostPrice;
    float ProfitPercentage = (float)Profit / CostPrice * 100;

    cout << "Cost Price: ₹" << CostPrice << endl;
    cout << "Selling Price: ₹" << SellingPrice << endl;
    cout << "Profit: ₹" << Profit << endl;
    cout << "Profit Percentage: " << ProfitPercentage << "%" << endl;

    return 0; 
}