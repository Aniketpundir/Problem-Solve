#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }

    cout << "After the removing duplicates values in the array: ";
    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
}