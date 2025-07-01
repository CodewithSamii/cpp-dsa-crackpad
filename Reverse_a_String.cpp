/// Write a program to reverse a string. Take it from user. Use a for loop and print the reversed string.
/*
Exm: 
Input: Java
Output: avaJ

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int len = str.length();
    for (int i = len - 1; i >= 0; i -=1 )
    {
        cout << str[i];
    }
}