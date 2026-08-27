#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int positiveOddCount=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]>0 && arr[i]%2==1)
        {
            positiveOddCount++;
            
        }
    }
    cout<<"Number of positive odd elements:"<<positiveOddCount<<endl;
    return 0; 
}