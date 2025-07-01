/// Write a program to print all numbers from i to n that are divisible by p.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, p;
    cout << "Enter 1st Number: ";
    cin >> i;
    cout << "Enter 2nd Number: ";
    cin >> n;
    cout << "Enter dividing Number: ";
    cin >> p;

    for (i; i <= n; i++)
    {
        if (i % p == 0)
        {
            cout << i << endl;
        }
    }
}
