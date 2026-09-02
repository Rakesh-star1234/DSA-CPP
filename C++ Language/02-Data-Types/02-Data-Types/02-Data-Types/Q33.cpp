#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float Morning = 22.5;
    float Afternoon = 35.8;
    float Evening = 28.3;

    float Totaltemperature = Morning + Afternoon + Evening;
    float Averagetemperature = Totaltemperature / 3;
    float Highesttemperature = max({Morning, Afternoon, Evening});

    cout << "Morning temperature: " << Morning << endl;
    cout << "Afternoon temperature: " << Afternoon << endl;
    cout << "Evening temperature: " << Evening << endl;
    cout << "Total temperature: " << Totaltemperature << endl;
    cout << "Average temperature: " << Averagetemperature << endl;
    cout << "Highest temperature: " << Highesttemperature << endl;

    return 0; 
}