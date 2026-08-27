#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int countZero=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            countZero++;
        }
    }
    cout<<"Number of zeros in the array: "<<countZero<<endl;
    return 0;
}