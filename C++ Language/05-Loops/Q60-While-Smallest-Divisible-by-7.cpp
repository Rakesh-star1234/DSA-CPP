#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while(i <= 100)
    {
        if(i % 7 == 0)
        {
            cout << "Smallest: " << i << endl;
            break;
        }

        i++;
    }

    return 0;
}