#include <iostream>
using namespace std;

int main()
{
    int a = 24;
    int b = 9;

    cout << "Before swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}