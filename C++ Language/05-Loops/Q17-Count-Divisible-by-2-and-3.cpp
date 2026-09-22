#include <iostream>
using namespace std;
int main()
{
    int Count=0;
    for(int i=1; i<=30; i++)
    {
        if(i%2==0 && i%3==0)
        {
            Count=Count+1; 
        }
    }
    cout<<"Count:"<<Count<<endl; 
    return 0;
}