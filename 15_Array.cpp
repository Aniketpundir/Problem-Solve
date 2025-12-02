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

    bool isSorted = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "The array is sorted.";
    }
    else
    {
        cout << "The array is not sorted.";
    }
}