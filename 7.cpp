#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = countDigit(n);
    cout << "Numbers of digits in " << n << " is: " << result << endl;
}