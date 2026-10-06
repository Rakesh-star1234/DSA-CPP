#include <iostream>
using namespace std;

bool isPositive(int num)
{
    return num > 0;
}
int main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    if(isPositive(number))
    {
        cout<<"The number is Positive"<<endl;
    }
    else
    {
        cout<<"The number is not Positive"<<endl;
    }
    return 0;
}