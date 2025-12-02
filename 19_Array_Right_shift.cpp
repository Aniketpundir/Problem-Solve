#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, d;
    cout << "Enter Array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> d;

    d = d % n;

    int leftShift = n - d;

    reverseArray(arr, 0, leftShift - 1);
    reverseArray(arr, leftShift, n - 1);
    reverseArray(arr, 0, n - 1);

    cout << "After the rotating array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}