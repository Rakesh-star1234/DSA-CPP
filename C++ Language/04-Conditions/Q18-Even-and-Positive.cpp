#include <iostream>
using namespace std;

int main()
{
    int Number = 24;

    if(Number > 0 && Number % 2 == 0)
    {
        cout << "Number is positive and even" << endl;
    }
    else
    {
        cout << "Number is not positive and even" << endl;
    }

    return 0;
}