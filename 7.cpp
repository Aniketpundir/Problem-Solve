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

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // int result = countDigit(n);
    int result = reverseNumber(n);
    cout << "The reversed number" << n << " is: " << result << endl;
}