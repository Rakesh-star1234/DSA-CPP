#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int countGreaterOrEqual10=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]>=10)
        {
            countGreaterOrEqual10++;
            
        }
    }
    cout<<"Number of elements greater than or equal to 10:"<<countGreaterOrEqual10<<endl;
    return 0;
}