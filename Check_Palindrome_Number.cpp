#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0, temp = n;

    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (rev == n)
        cout << "Palindrome Number" << endl;
    else
        cout << "Not Palindrome Number" << endl;
}
