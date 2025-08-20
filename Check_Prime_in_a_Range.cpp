#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;

    for (int n = l; n <= r; n++)
    {
        bool isPrime = true;

        if (n <= 1)
            isPrime = false;
        else
        {
            for (int i = 2; i * i <= n; i++)
                if (n % i == 0)
                    isPrime = false;
        }

        if (isPrime)
            cout << n << " is Prime" << endl;
        else
            cout << n << " is Not Prime" << endl;
    }
}
