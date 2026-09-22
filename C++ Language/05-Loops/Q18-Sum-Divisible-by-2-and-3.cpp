#include <iostream>
using namespace std;
int main()
{
    int Sum=0;
    for(int i=1; i<=30; i++)
    {
        if(i%2==0 && i%3==0)
        {
            Sum=Sum+i;
        }
    }
    cout<<"Sum:"<<Sum<<endl;
    return 0;

} 