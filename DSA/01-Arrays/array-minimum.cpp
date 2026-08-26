#include <iostream>
using namespace std;
int main()
{

    int arr[5]; 
    int min=arr[0];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        if(arr[i]<min)
        {
            min=arr[i];  
            
        }
    }
    cout<<"min="<<min<<endl;
    return 0;
}