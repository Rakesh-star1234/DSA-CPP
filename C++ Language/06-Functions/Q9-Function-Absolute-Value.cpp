#include <iostream>
using namespace std;

int absoluteValue(int num)
{
    if(num < 0)
    {
        return -num;
    }
    else
    {
        return num;
    }
}
int main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    cout<<"The absolute value of "<<number<<" is "<<absoluteValue(number)<<endl;
    return 0;
}