#include <iostream>
using namespace std;

double findAverage(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (double)sum / size;
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    cout << "Enter the elements of the array:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The average is: " << findAverage(arr, size) << endl;

    return 0;
}