#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enterr the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    cout << "Array after left rotation: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}