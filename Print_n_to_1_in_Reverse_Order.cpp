/// Write a program to print all numbers from 10 to 1 in reverse order using a for loop.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = n; i>=1; i-=1){
        cout << i << ' '; /// not using a newline but adding a one charecter space between all the numbers.
    }
}