#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cin >> arr[0];

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < 5; i++)
    {
        cin >> arr[i];

        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int difference = max - min;

    cout << "Difference = " << difference;

    return 0;
}