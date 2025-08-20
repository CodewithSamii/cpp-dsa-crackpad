#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 400 == 0)
        cout << "Leap Year" << endl;
    else if (year % 100 == 0)
        cout << "Not Leap Year" << endl;
    else if (year % 4 == 0)
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;
}
