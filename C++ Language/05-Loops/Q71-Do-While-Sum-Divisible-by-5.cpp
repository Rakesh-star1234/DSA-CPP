#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;

    do
    {
        if(i % 5 == 0)
        {
            sum = sum + i;
        }

        i++;
    }
    while(i <= 100);

    cout << "Sum: " << sum << endl;

    return 0;
}