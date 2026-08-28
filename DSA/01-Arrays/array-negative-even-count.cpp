#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int negativeEvenCount=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]<0 && arr[i]%2==0)
        {
            negativeEvenCount++;

        } 
    }
    cout<<"Number of negative even elements:"<<negativeEvenCount<<endl;
    return 0;
}