#include <iostream>
using namespace std;
int main()
{
    int Marks=90;
    if(Marks >=90)
    {
        cout<<"Grade A:"<<endl;
    }
    else if(Marks >=80)
    {
        cout<<"Grade B:"<<endl;
    }
    else if(Marks>=70)
    {
        cout<<"Grade C:"<<endl;
    }
    else if(Marks>=60)
    {
        cout<<"Grade D:"<<endl;
    }
    else
    {
        cout<<"Fail F:"<<endl; 
    }
    return 0; 
}