#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int lcm = (a * b) / gcd(a, b);
    cout << "LCM = " << lcm << endl;
}
