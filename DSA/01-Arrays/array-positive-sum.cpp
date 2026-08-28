#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum =0;
    for(int i=0; i<5; i++) 
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
           sum = sum + arr[i]; 
            
            
        }
    }
    cout<<"Sum of positive elements: "<<sum<<endl; 
    return 0;  
} 