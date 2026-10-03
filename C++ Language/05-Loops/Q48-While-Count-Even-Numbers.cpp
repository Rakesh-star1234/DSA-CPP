#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int count = 0;

    while(i <= 50)
    {
        if(i % 2 == 0)
        {
            count = count + 1;
        }

        i++;
    }

    cout << "Count: " << count << endl;

    return 0;
}