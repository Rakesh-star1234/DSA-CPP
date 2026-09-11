#include <iostream>
using namespace std;

int main()
{
    int CorrectPIN = 1234;
    int EnteredPIN = 1234;

    if(EnteredPIN == CorrectPIN)
    {
        cout << "Access Granted" << endl;
    }
    else
    {
        cout << "Incorrect PIN" << endl;
    }

    return 0;
}