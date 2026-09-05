#include <iostream>
using namespace std;
int main()
{
    int mathMarks=85;
    int physicsMarks=90;
    int computerMarks=95;
    int totalMarks=mathMarks+physicsMarks+computerMarks;
    float averageMarks=totalMarks/3.0;
    float percentage=(totalMarks/300.0)*100;
    cout<<"Math Marks:"<<mathMarks<<endl;
    cout<<"physics Marks:"<<physicsMarks<<endl;
    cout<<"computer Marks:"<<computerMarks<<endl;
    cout<<"Total Marks:"<<totalMarks<<endl;
    cout<<"Average Marks:"<<averageMarks<<endl;
    cout<<"Percentage:"<<percentage<<"%"<<endl;
    return 0;
}