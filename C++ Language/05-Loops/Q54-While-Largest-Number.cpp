#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int largest = 1;
    while(i <= 50)
    {
        if(i > largest)
        {
            largest = i;
        }
        i++;
    }
    cout << "The largest number from 1 to 50 is: " << largest << endl;
    return 0;
}