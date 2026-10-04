#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int largest = 1;

    do
    {
        if(i > largest)
        {
            largest = i;
        }

        i++;
    }
    while(i <= 50);

    cout << "Largest: " << largest << endl;

    return 0;
}