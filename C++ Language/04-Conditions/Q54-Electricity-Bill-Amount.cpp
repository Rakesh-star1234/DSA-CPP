#include <iostream>
using namespace std;

int main()
{
    int Units = 250;
    int Rate = 6;
    int Bill = Units * Rate;

    if(Units <= 100)
    {
        cout << "Low Usage" << endl;
    }
    else if(Units <= 300)
    {
        cout << "Medium Usage" << endl;
    }
    else
    {
        cout << "High Usage" << endl;
    }

    cout << "Total Bill = " << Bill << endl;

    return 0;
}
