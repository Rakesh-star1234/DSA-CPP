#include <iostream>
using namespace std;
int main()
{
    int BasicSalary = 25000;
    float Bonus = 0.1;
    float TotalSalary = BasicSalary + (BasicSalary * Bonus);
    cout << "Total Salary: " << TotalSalary << endl;
    return 0;
}