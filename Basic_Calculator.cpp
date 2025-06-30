/// Making a console base simple calculator

#include <bits/stdc++.h>
using namespace std;

int main(){
    int numA, numB;
    char op;
    cout << "Enter 1st num: ";
    cin >> numA;
    cout << "Enter 2nd num: ";
    cin >> numB;
    cout << "Enter the operator: ";
    cin >> op;
    
    if (op == '+')
    cout << "Additional Value for the both number is: " << numA + numB << endl;
    else if (op == '-')
    cout << "Substractional Value for the both number is: " << numA - numB << endl;
    else if (op == '*')
    cout << "Multiplicational Value for the both number is: " << numA * numB << endl;
    else if (op == '/'){
        if (numB == 0) cout << "Cant devide with 0" << endl;
        else{
            cout << "Divisional value for the numbers is: "<< numA/numB << endl;
        }
    }
    else if (op == '%')
    cout << "Mod value for the number is: " << numA % numB << endl;
}