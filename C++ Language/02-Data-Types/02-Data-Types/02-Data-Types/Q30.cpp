#include <iostream>
using namespace std;
int main()
{
    float price=1200.50;
    int Quantity=2;
    float GST=18.0;
    float Subtotal = price * Quantity;
    float GSTAmount = Subtotal * GST / 100;
    float TotalPrice = Subtotal + GSTAmount;

    cout << "Subtotal: " << Subtotal << endl;
    cout << "GST Amount: " << GSTAmount << endl;
    cout << "Total Price: " << TotalPrice << endl;

    return 0; 
}