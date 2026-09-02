#include <iostream>
using namespace std;
int main()
{
    int UnitsConsumed=270;
    float perUnitsCharge=6.50;
    float EnergyCharge=UnitsConsumed*perUnitsCharge;
    float FixedCharge=50.00;
    float TotalBill=EnergyCharge+FixedCharge;
    cout<<"Units Consumed:"<<UnitsConsumed<<endl;
    cout<<"Per Unit Charge:"<<perUnitsCharge<<endl;
    cout<<"Energy Charge:"<<EnergyCharge<<endl;
    cout<<"Fixed Charge:"<<FixedCharge<<endl;
    cout<<"Total Bill:"<<TotalBill<<endl;
    return 0; 
}