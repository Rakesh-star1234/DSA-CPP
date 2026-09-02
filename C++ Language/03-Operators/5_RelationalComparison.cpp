#include <iostream>
using namespace std;
int main()
{
    int a=35;
    int b=20;
    bool greater = a>b;
    bool smaller = a<b;
    bool equal = a==b;
    bool notEqual =a!=b;
    cout<<"A greater than B:"<<greater<<endl;
    cout<<"A smaller than B:"<<smaller<<endl;
    cout<<"A equal to B:"<<equal<<endl;
    cout<<"A not equal to B:"<<notEqual<<endl;
    return 0;
}