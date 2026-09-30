#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for(int i = 1; i <= 100; i++)
    {
        if(i > 50)
        {
            sum = sum + i;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}