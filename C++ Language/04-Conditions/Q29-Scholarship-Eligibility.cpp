#include <iostream>
using namespace std;

int main()
{
    int Marks = 85;
    int Attendance = 90;

    if(Marks >= 80 && Attendance >= 75)
    {
        cout << "Eligible for Scholarship" << endl; 
    }
    else
    {
        cout << "Not Eligible for Scholarship" << endl;
    }

    return 0;
}