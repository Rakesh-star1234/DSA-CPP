#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int positiveEvenCount=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]>0 && arr[i]%2==0)
        {
            positiveEvenCount++;
            
        }
    } 
    cout<<"Number of positive even elements:"<<positiveEvenCount<<endl;
    return 0;
} 