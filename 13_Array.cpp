#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
    int maximumNumber = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximumNumber)
        {
            maximumNumber = arr[i];
        }
    }
    return maximumNumber;
}

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elemnts: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int value = largestElement(arr, n);

    cout << "The largest number in the array is: " << value;
    return 0;
}