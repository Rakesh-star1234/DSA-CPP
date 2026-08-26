#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cin >> arr[0];

    int max = arr[0];
    int secondMax = arr[0];

    for(int i = 1; i < 5; i++)
    {
        cin >> arr[i];

        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }

    cout << "Second Largest = " << secondMax;

    return 0; 
}