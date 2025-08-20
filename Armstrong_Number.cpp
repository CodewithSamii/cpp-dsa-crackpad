#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, temp = n;
    int digits = log10(n) + 1;

    while (temp > 0)
    {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number << endl";
    else
        cout << "Not Armstrong Number << endl";
}
