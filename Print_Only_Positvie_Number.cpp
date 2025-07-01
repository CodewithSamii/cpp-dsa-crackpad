/// Take input from the user.
/*
Input: An array of numbers, containing both positive and negative values.
Output: Print only the positive numbers from the array.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amnt;
    cout << "Enter total number of values: ";
    cin >> amnt;
    int arr[amnt];
    cout << "Enter "<< amnt << " values: " ;
    for (int i = 0; i < amnt; i+=1){
        cin >> arr[i];
    }
    for (int i = 0; i < amnt; i+=1){
        if (arr[i] >= 0){\
            cout << arr[i] << endl;
        }
    }
}

/*
Sample Input: 10 -5 -6 0 35

Sample Output: 
10
0
35

*/