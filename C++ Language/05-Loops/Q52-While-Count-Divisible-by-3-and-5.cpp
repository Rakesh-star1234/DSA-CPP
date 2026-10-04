#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int count = 0;
    while(i<=100)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            count++;
        }
        i++;
    }
    cout << "Count of numbers divisible by both 3 and 5 from 1 to 100 is: " << count << endl;
    return 0;
}