#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter student marks: ";
    cin >> n;

    if (n >= 90 && n <= 100)
    {
        cout << "Grade A" << endl;
    }
    else if (n >= 70 && n < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (n >= 50 && n < 70)
    {
        cout << "Grade C" << endl;
    }
    else if (n >= 35 && n < 50)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}