#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int Count=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]>10)
        {
            Count++; 
        }
    }
    cout<<"Number of elements greater than 10: "<<Count<<endl; 
    return 0;
}