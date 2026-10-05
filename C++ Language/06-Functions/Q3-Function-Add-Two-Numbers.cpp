#include <iostream>
using namespace std;
int addNumbers(int a , int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int a, b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    int sum = addNumbers(a,b);
    cout<<"sum:"<<sum<<endl;
    return 0;
} 