#include <iostream>
using namespace std;
int main()
{
    int A = 25;
    int B = 40;
    int C = 15;
    if(A<B && B<C) 
    {
        cout<<"Smallest:"<<A<<endl;
    } 
    else if(B<A && B>C) 
    {
        cout<<"Smallest:"<<B<<endl;
    }
    else 
    {
        cout<<"Smallest:"<<C<<endl;
    }
    return 0; 

}