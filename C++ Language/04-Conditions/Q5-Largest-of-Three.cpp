#include <iostream>
using namespace std;

int main()
{
    int A = 25;
    int B = 40;
    int C = 30;

    if(A > B && A > C)
    {
        cout << "Largest = " << A << endl;
    }
    else if(B > A && B > C)
    {
        cout << "Largest = " << B << endl;
    }
    else
    {
        cout << "Largest = " << C << endl; 
    }

    return 0;
}
