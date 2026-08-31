#include <iostream>
using namespace std;

int main()
{
    int number=47;

    int lastDigit = number % 10;
    int firstDigit = number / 10;
    int reverse = lastDigit * 10 + firstDigit;
    
    cout << "Number: " << number << endl;
    cout << "Reverse: " << reverse << endl; 
    return 0;
}