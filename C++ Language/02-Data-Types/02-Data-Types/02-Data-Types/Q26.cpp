#include <iostream>
using namespace std;
int main()
{
    int EnglishMarks = 78;
    int HindiMarks=85;
    int MathsMarks=90;
    int TotalMarks=EnglishMarks+HindiMarks+MathsMarks;
    float Percentage=(TotalMarks/300.0)*100;
    cout<<"English marks: "<<EnglishMarks<<endl;
    cout<<"Hindi marks: "<<HindiMarks<<endl;
    cout<<"Maths marks: "<<MathsMarks<<endl;
    cout<<"Total marks: "<<TotalMarks<<endl;
    cout<<"Percentage: "<<Percentage<<endl; 
    return 0; 
}