
#include <iostream>
using namespace std;

int countOdd(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
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

    cout << "Enter the array elements:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Total odd numbers: "
         << countOdd(arr, size) << endl;

    return 0;
}
