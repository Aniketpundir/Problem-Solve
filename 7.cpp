#include <iostream>
using namespace std;

// int countDigit(int n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         count++;
//         n = n / 10;
//     }

//     return count;
// }

int reverseNumber(int n)
{
    int reversedNumber = 0;
    while (n != 0)
    {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n = n / 10;
    }
    return reversedNumber;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // int result = countDigit(n);
    // int result = reverseNumber(n);
    int result = isPrime(n);
    if (result == true)
    {
        cout << "The given number " << n << " is " << "prime" << endl;
    }
    else
    {
        cout << "The given number " << n << " is not" << "prime" << endl;
    }
}