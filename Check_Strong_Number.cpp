/// (A strong number = sum of factorial of digits = number, e.g., 145 = 1!+4!+5!)

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0, temp = n;

    while (temp > 0)
    {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }

    if (sum == n)
        cout << "Strong Number" << endl;
    else
        cout << "Not Strong Number" << endl;
}
