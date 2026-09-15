#include <iostream>
using namespace std;

int main()
{
    int AnnualIncome = 750000;

    if(AnnualIncome <= 300000)
    {
        cout << "No Tax" << endl;
    }
    else if(AnnualIncome <= 700000)
    {
        cout << "Low Tax" << endl;
    }
    else if(AnnualIncome <= 1000000)
    {
        cout << "Medium Tax" << endl;
    }
    else
    {
        cout << "High Tax" << endl;
    }

    return 0;
}