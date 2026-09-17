#include <iostream>
using namespace std;

int main()
{
    int OrderAmount = 3500;
    int Membership = 1;

    if(OrderAmount >= 3000 || Membership == 1)
    {
        cout << "Free Delivery" << endl;
    }
    else
    {
        cout << "Delivery Charges Apply" << endl;
    }

    return 0;
}