#include <iostream>
using namespace std;

int main()
{
    int Temperature = 38;

    if(Temperature >= 0 && Temperature <= 40)
    {
        cout << "Safe Temperature" << endl;
    }
    else
    {
        cout << "Unsafe Temperature" << endl;
    }

    return 0;
}