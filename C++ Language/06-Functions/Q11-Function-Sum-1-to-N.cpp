#include <iostream>
using namespace std;
int findsum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The sum of numbers from 1 to " << n << " is: " << findsum(n) << endl;
    return 0;
}