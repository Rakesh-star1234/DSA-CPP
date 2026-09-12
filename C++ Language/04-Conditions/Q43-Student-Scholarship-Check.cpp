#include <iostream>
using namespace std;

int main()
{
    int Marks = 92;
    int Attendance = 85;

    if(Marks >= 90 && Attendance >= 80)
    {
        cout << "Full Scholarship" << endl;
    }
    else
    {
        cout << "No Full Scholarship" << endl;
    }

    return 0;
}