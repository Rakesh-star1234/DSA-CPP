#include <iostream>
using namespace std;
int main()
{
    int Sum=0;
    for(int i=1; i<=20; i++)
    {
        if(i%3==0) 
        {
        Sum=Sum+i; 
        }


    }
    cout<<"sum:"<<Sum<<endl;
    return 0;
} 