#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int smallest = 1;
    while(i<=50)
    {
        if(i<smallest)
        {
            smallest = i; 
        }
        i++;
    }
    cout << "The smallest number from 1 to 50 is: " << smallest << endl;
    return 0;
} 