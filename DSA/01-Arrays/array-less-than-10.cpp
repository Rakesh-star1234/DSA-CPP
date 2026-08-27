#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int count=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]<10)
        {
            count++;
        }
    }

    cout<<"Number of elements less than 10:"<<count<<endl;
    return 0;
}