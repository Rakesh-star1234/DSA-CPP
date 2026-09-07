#include <iostream>
using namespace std;

int main()
{
    int Number = 35;

    if(Number % 5 == 0 || Number % 7 == 0)
    {
        cout << "Divisible by 5 or 7" << endl;
    }
    else
    {
        cout << "Not Divisible by 5 or 7" << endl;
    }

    return 0;
}