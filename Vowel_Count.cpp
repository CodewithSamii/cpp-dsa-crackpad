/// Take a string from user, count how many vowels are present in the string using a for loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string word;
    cout << "Enter a string: ";
    getline (cin, word);
    int len = word.length();
    for (int i = 0; i < len; i+=1){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            count += 1;
        }
    }
    cout << "Total vowels present in the string - " << word << " is: " << count ;
}

// Function used: getline(cin, variableName);
// This is used to take a full line of input from the user, including spaces.
// Unlike cin >>, which stops at spaces, getline() reads the entire line until a newline character is encountered.
