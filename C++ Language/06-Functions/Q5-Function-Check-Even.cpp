#include <iostream>
using namespace std;
int evenCheck(int num)
{
    if(num%2==0)
    {
        return num;
    }
}
int main()
{
    int num;
    cout<<"enter a number:"<<endl;
    cin>>num;
    int even = evenCheck(num);
    if(even)
    {
        cout<<"even number:"<<even<<endl;
    }
    else
    {
        cout<<"odd number:"<<num<<endl;
    }
    return 0;
}