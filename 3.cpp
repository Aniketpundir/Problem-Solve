#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    // Convert to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}