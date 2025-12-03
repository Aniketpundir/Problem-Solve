#include <iostream>
#include <set>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first array size: ";
    cin >> num1;
    cout << "Enter second array size: ";
    cin >> num2;

    int arr1[num1];
    int arr2[num2];

    cout << "Enter first array elements: ";
    for (int i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter second array elements: ";
    for (int i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }

    set<int> u;

    for (int i = 0; i < num1; i++)
    {
        u.insert(arr1[i]);
    }

    for (int i = 0; i < num2; i++)
    {
        u.insert(arr2[i]);
    }

    cout << "Union of arrays: ";
    for (int x : u)
    {
        cout << x << " ";
    }
}