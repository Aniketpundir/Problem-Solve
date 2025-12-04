#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique ^= arr[i];
    }

    cout << "Unique element is: " << unique;
    return 0;
}