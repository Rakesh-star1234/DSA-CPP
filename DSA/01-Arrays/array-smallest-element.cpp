#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int smallestElement = arr[0]; 

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < smallestElement)
        {
            smallestElement = arr[i];
        }
    }

    cout << "Smallest element: " << smallestElement << endl;

    return 0;
}
      