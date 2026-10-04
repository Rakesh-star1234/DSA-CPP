#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;

    while(i <= 50)
    {
        if(i < 25)
        {
            sum = sum + i;
        }

        i++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}