#include <iostream>
using namespace std;
int main()
{ 
    int arr[5];
    int oddLessThan10Count=0; 
    for(int i=0; i<5; i++) 
    {
        cin>>arr[i];
        if(arr[i] <10 && arr[i]%2==1)
        {
            oddLessThan10Count++; 

        }

    }
    cout<<"Number of odd elements less than 10:"<<oddLessThan10Count<<endl;
    return 0;
}
