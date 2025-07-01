/// Print all even numbers between 1 and n using a for loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // taking user input. ig: Input is: 6. So the output will be: 2 4 6.
    for (int i = 2; i <= n; i += 1)
    { /// as 1 is not a even number so the loop starts from 2.
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}