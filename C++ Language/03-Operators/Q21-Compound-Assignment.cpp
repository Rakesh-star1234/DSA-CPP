#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    a += b;
    cout << "After += : " << a << endl;

    a -= 2;
    cout << "After -= : " << a << endl;

    a *= 3;
    cout << "After *= : " << a << endl;

    a /= 2;
    cout << "After /= : " << a << endl;

    return 0;
} 