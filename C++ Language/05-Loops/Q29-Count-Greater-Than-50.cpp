#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for(int i = 1; i <= 100; i++)
    {
        if(i > 50)
        {
            count = count + 1;
        }
    }

    cout << "Count: " << count << endl;

    return 0;
}