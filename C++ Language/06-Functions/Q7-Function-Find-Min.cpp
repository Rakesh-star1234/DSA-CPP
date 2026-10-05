#include <iostream>
using namespace std;

int findMin(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = findMin(a, b);

    cout << "Minimum: " << result << endl;

    return 0;
}