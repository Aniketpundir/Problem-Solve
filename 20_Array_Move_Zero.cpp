#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < n)
    {
        arr[count] = 0;
        count++;
    }

    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}