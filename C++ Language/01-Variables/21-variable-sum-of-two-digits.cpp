#include <iostream>
using namespace std;

int main()
{
    int number = 47;

    int lastDigit = number % 10;
    int firstDigit = number / 10;
    int sum = firstDigit + lastDigit;

    cout << "Sum: " << sum << endl;

    return 0; 
}