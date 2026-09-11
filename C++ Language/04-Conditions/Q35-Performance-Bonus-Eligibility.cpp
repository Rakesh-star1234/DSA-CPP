#include <iostream>
using namespace std;

int main()
{
    int PerformanceRating = 4;
    int Experience = 5;

    if(PerformanceRating >= 4 || Experience >= 5)
    {
        cout << "Eligible for Performance Bonus" << endl;
    }
    else
    {
        cout << "Not Eligible for Performance Bonus" << endl;
    }

    return 0;
}