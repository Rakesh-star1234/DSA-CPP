#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int negativeCount=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            negativeCount++;
            
        }
    }
    cout<<"Number of negative elements in the array: "<<negativeCount<<endl;
    return 0;
}