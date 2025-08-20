#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    string *ptr = &str;  // Initialize the pointer with the address of str

    cout << "Enter a name: ";
    getline(cin, str);

    cout << "Value via pointer: " << *ptr << endl;   // Correct: print the value
    cout << "Address in pointer: " << ptr << endl;   // Shows the address stored in ptr
}
