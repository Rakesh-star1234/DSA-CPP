#include <iostream>
using namespace std;

void countEvenOddDigits(int n)
{
    int even = 0;
    int odd = 0;

    while(n != 0)
    {
        int digit = n % 10;

        if(digit % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        n = n / 10;
    }

    cout << "Even digits: " << even << endl;
    cout << "Odd digits: " << odd << endl;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    countEvenOddDigits(n);

    return 0;
}