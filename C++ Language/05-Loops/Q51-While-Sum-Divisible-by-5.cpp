#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;
    while(i<=100)
    {
        if(i % 5 == 0)
        {
            sum = sum+i;
        }
        i++;
    }
    cout << "Sum of numbers divisible by 5 from 1 to 100 is: " << sum << endl;
    return 0;
}