#include <iostream>
using namespace std;
int main()
{
    int Year = 2024;
    if(Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
{
    cout<<"Leap year:"<<endl; 
}
else
{
    cout<<"Not Leep Year:"<<endl;  
}
 return 0; 
}