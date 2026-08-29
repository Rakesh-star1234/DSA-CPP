#include <iostream>
using namespace std;
int main()
{
    int hindi=80;
    int english=90;
    int maths=70;
    int science=85;
    int socialScience=75;
    int Total=(hindi+english+maths+science+socialScience);
    int Total_percentage(Total/5);
    cout<<"Total marks:"<<Total<<endl;
    cout<<"Total prcentage:"<<Total_percentage<<endl; 
    return 0;
}