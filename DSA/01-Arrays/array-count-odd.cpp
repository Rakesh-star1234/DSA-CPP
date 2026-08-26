#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int count=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i] %2==1)
        {
            count++;
        }
    }
    cout<<"count="<<count<<endl;
    return 0; 
}