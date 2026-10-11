#include <iostream>
using namespace std;
int findSum(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
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

    cout << "Sum of the array elements: " << findSum(arr, size) << endl;

    return 0;
}