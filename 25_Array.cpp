#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize largest and second largest
    int max1 = arr[0];
    int max2 = arr[1];

    if (max2 > max1)
    {
        swap(max1, max2);
    }

    // Traverse array to find top two maximums
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    int maxProduct = max1 * max2;

    cout << "Maximum Product is: " << maxProduct << endl;
    cout << "(" << max1 << " x " << max2 << ")" << endl;

    return 0;
}
