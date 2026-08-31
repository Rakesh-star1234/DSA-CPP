#include <iostream>
using namespace std;

int main()
{
    int a = 23;
    int b = 20;

    cout << "Before Swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}