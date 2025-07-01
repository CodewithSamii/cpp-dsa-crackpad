/// Print all multiples of 3 between 1 and n.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 1)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
}