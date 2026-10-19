
#include <iostream>
using namespace std;

int countNegative(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
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
        return 1;
    }

    int arr[100];

    cout << "Enter the elements of the array:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int negativeCount = countNegative(arr, size);

    cout << "Number of negative elements: "
         << negativeCount << endl;

    return 0;
}
