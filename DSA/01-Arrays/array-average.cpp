#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
        
    }
    double average=sum/5;
    cout<<"Average="<<average<<endl;
    return 0;
}