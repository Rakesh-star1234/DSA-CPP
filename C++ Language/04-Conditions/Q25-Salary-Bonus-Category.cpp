#include <iostream>
using namespace std;
int main()
{
    int BasicSalary = 30000;
    int Bonus = 5000;
    int TotalSalary = BasicSalary + Bonus;
    if(TotalSalary >= 40000)
    {
        cout<<"High Salary:"<<endl; 
    }
    else if(TotalSalary >= 30000)
    {
        cout<<"Medium Salary:"<<endl;
    }
    else
    {
        cout<<"Low Salary:"<<endl;

    }
    return 0; 
}