#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int left = 0;
    int right = s.length() - 1;

    bool isPalindrome = true;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    cout << (isPalindrome ? "Palindrome" : "Not Palindrome");
}
