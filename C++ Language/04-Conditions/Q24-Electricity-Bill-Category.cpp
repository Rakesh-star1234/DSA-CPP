#include <iostream>
using namespace std;
int main()
{
    int Units = 250;
    if(Units <= 100)
    {
        cout<<"Low use:"<<endl;
    }
    else if(Units > 100 && Units <= 200)
    {
        cout<<"Meddium use:"<<endl;
    }
    else if(Units > 200)
    {
        cout<<"High use:"<<endl; 
    }
    return 0; 
}