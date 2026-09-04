#include <iostream>
using namespace std;
int main()
{
    int a = 25;
    int b = 10;
    int sum =a+b;
    int diffrence =a-b; 
    int product =a*b;
    int quotient =a/b;
    int remainder=a%b;
    bool result = (a > b) && (a % 2 == 0);
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diffrence << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "Result: " << result << endl;
    return 0; 
}