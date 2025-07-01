/// A string is given: Python
/// Target output is: 
/*
P
Y
T 
H 
O 
N 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string pyt = "Python";
    int len = pyt.length();
    for (int i = 0; i < len; i+=1)
    {
        cout << pyt[i] << endl;
    }
}

/// Function used: variableName.length();
/// In C, we used strlen(), e.g., strlen(pyt);
/// In C++, the equivalent is pyt.length().
