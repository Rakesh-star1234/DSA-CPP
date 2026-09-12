#include <iostream>
using namespace std;

int main()
{
    int Number = 60;

    if(Number % 2 == 0 && Number % 3 == 0)
    {
        cout << "Divisible by 2 and 3" << endl;
    }
    else
    {
        cout << "Not Divisible by 2 and 3" << endl;
    }

    return 0;
}