#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << " is larger" << endl;
    else if (b > a)
        cout << b << " is larger" << endl;
    else
        cout << "Both are equal" << endl;
}
