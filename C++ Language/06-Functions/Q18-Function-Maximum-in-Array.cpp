#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if(size <= 0 || size > 100)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[100];

    cout << "Enter the array elements: " << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum number: " << findMax(arr, size) << endl;

    return 0;
}