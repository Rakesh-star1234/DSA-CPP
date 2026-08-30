#include <iostream>
using namespace std;

int main()
{
    int hindi = 80;
    int english = 90;
    int maths = 70;
    int science = 85;
    int socialScience = 75;

    int total = hindi + english + maths + science + socialScience;
    int percentage = (total * 100) / 500;

    cout << "Total: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}