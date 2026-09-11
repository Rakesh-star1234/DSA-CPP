#include <iostream>
using namespace std;

int main()
{
    int CorrectPassword = 12345;
    int EnteredPassword = 12345;

    if(EnteredPassword == CorrectPassword)
    {
        cout << "Login Successful" << endl;
    }
    else
    {
        cout << "Invalid Password" << endl;
    }

    return 0;
}