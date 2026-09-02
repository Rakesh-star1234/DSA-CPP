#include <iostream>
using namespace std;
int main()
{
    int TotalSecond= 7385;
    int hours= TotalSecond / 3600;
    int minutes= (TotalSecond % 3600) / 60;
    int seconds= TotalSecond % 60;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl; 
    return 0;
}