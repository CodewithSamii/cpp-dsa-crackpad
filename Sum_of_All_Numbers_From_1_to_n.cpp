/// Calculate and print the sum of all numbers from 1 to n using a for loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i += 1)
    {
        count += i;
    }
    cout << count;
}