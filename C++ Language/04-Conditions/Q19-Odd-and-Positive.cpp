#include <iostream>
using namespace std;

int main()
{
    int Number = 15;

    if(Number > 0 && Number % 2 != 0)
    {
        cout << "Number is positive and odd" << endl;
    }
    else
    {
        cout << "Number is not positive and odd" << endl;
    }

    return 0; 
}