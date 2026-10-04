#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int smallest = 1;

    do
    {
        if(i < smallest)
        {
            smallest = i;
        }

        i++;
    }
    while(i <= 50);

    cout << "Smallest: " << smallest << endl;

    return 0;
}