#include <iostream>
using namespace std;

void showNumber(int num)
{
    cout<<"Number:"<<num<<endl;
} 
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    showNumber(num);
    return 0;
}