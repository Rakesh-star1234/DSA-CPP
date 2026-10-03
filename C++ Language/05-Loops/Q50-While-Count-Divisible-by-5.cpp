#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int count = 0;

    while(i <= 100)
    {
        if(i % 5 == 0)
        {
            count = count + 1;
        }

        i++;
    }

    cout << "Count: " << count << endl;

    return 0;
}
