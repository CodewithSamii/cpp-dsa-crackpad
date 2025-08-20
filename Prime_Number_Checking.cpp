#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, status = 0;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 1)
    {
        for (int i = 2; i < number; i += 1)
        {
            if (number % i == 0)
            {
                status = 1;
                break;
            }
        }
    }
    if (status == 1)
        cout << "Its not a prime number.";
    else
    {
        if (number == 0 || number == 1)
            cout << "Enter a number except 1 and 0." << endl;
        else if (number < 0)
            cout << "Enter a positive number";
        else
        {
            cout << "Its a prime number.";
        }
    }
}

// #include <iostream>
// using namespace std;

// int *okay(int &x) {  
//     return &x; 
// }

// int main() {
//     int a = 5;
//     cout << okay(a) << endl;  
// }
