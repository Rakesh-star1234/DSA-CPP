#include <iostream>
using namespace std;

int main()
{
    int Units = 350;

    if(Units <= 100)
    {
        cout << "Low Usage" << endl;
    }
    else if(Units > 100 && Units <= 300)
    {
        cout << "Medium Usage" << endl;
    }
    else
    {
        cout << "High Usage" << endl;
    }

    return 0;
}