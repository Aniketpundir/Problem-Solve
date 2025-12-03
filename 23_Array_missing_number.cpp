#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter array number: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter array elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    cout << "Missing number is: " << missing;
}