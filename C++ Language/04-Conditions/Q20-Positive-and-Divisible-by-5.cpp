#include <iostream>
using namespace std;

int main()
{
    int Number = 25;

    if(Number > 0 && Number % 5 == 0)
    {
        cout << "Number is positive and divisible by 5" << endl;
    }
    else
    {
        cout << "Condition is not satisfied" << endl;
    }

    return 0;
}