#include <iostream>
using namespace std;

int main()
{
    int Largest = 1;

    for(int i = 1; i <= 10; i++)
    {
        if(i > Largest)
        {
            Largest = i;
        }
    }

    cout << "Largest: " << Largest << endl;

    return 0;
}
