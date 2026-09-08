#include <iostream>
using namespace std;

int main()
{
    int Temperature = 35;

    if(Temperature < 10)
    {
        cout << "Cold" << endl;
    }
    else if(Temperature <= 24)
    {
        cout << "Normal" << endl;
    }
    else if(Temperature <= 39)
    {
        cout << "Warm" << endl;
    }
    else
    {
        cout << "Hot" << endl;
    }

    return 0;
}