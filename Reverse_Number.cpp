#include <bits/stdc++.h>
using namespace std;    

int main(){
    string number;
    getline(cin, number);
    int r = number.length();
    for (int i = r - 1; i >= 0; i--) {
        cout << number[i];
    }
}