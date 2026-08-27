#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int evenGreaterThan10Count=0;
    for(int i=0; i<5; i++)
{
        cin>>arr[i];
        if(arr[i]>10 && arr[i]%2==0)
        {
            evenGreaterThan10Count++;
        }
        
}
    cout<<"Number of even element greater than 10:"<<evenGreaterThan10Count<<endl;
    return 0;
}
