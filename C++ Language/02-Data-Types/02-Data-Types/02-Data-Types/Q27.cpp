#include <iostream>
using namespace std;
int main ()
{
    float BasicSalary = 25000.50;
    float Bonus = 5000.75;
    float Tax = 10.0;
    float GrossSalary = BasicSalary + Bonus;
    float TaxAmount = GrossSalary * Tax / 100;
    float NetSalary = GrossSalary - TaxAmount;
    
    cout << "Basic Salary: " << BasicSalary << endl;
    cout << "Bonus: " << Bonus << endl;
    cout << "Gross Salary: " << GrossSalary << endl;
    cout << "Tax Amount: " << TaxAmount << endl;
    cout << "Net Salary: " << NetSalary << endl;
    return 0;
}