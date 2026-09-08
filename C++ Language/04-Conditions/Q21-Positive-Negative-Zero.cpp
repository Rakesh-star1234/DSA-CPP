#include <iostream>
using namespace std;

int main()
{
    int Number = -8;

    if(Number > 0)
    {
        cout << "Number is Positive" << endl;
    }
    else if(Number < 0)
    {
        cout << "Number is Negative" << endl;
    }
    else
    {
        cout << "Number is Zero" << endl;
    }

    return 0;
}