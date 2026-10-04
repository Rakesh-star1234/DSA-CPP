#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int count = 0;

    do
    {
        if(i % 5 == 0)
        {
            count++;
        }

        i++;
    }
    while(i <= 100);

    cout << "Count: " << count << endl;

    return 0;
}