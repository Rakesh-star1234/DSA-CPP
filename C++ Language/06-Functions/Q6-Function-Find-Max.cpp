#include <iostream>
using namespace std;
int findMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"the maximum number is: "<<findMax(a,b)<<endl;
    return 0;
}