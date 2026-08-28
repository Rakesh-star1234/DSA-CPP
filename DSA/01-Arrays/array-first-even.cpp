#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int firstEven = 0;
    int found = 0;

    for(int i = 0; i < 5; i++) 
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
        {
            firstEven = arr[i];
            found = 1;  
            break;
        }
    }

    if(found == 1)
    {
        cout << "First Even = " << firstEven;
    }
    else
    {
        cout << "No even element found";
    }

    return 0;  
} 