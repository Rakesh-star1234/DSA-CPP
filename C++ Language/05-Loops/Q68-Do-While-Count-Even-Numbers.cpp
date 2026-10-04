#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int count = 0;

    do
    {
        if(i % 2 == 0)
        {
            count++;
        }

        i++;
    }
    while(i <= 50);

    cout << "Count: " << count << endl;

    return 0;
}