#include <iostream>
using namespace std;

int main()
{
    int indianRupees = 8500;
    float exchangeRate = 83.50;

    float USdollars = indianRupees / exchangeRate;

    cout << "Indian Rupees: " << indianRupees << endl;
    cout << "Exchange Rate: " << exchangeRate << endl;
    cout << "US Dollars: " << USdollars << endl;

    return 0; 
}