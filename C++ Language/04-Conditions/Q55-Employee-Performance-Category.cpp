#include <iostream>
using namespace std;

int main()
{
    int PerformanceRating = 5;
    int Experience = 4;

    if(PerformanceRating >= 5 && Experience >= 5)
    {
        cout << "Excellent" << endl;
    }
    else if(PerformanceRating >= 4 && Experience >= 3)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Needs Improvement" << endl;
    }

    return 0;
}