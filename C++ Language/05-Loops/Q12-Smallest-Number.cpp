#include <iostream>
using namespace std;

int main()
{
    int Smallest = 1;

    for(int i = 1; i <= 10; i++)
    {
        if(i < Smallest)
        {
            Smallest = i;
        }
    }

    cout << "Smallest: " << Smallest << endl;

    return 0;
}