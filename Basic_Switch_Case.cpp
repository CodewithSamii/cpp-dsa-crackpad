#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    switch(num){
        case 1:
        cout << "Its Saturday."; break;
        case 2:
        cout << "Its Sunday."; break;
        case 3: 
        cout << "Its Monday."; break;
        case 4:
        cout << "Its Tuesday."; break;
        case 5:
        cout << "Its Wednesday."; break;
        case 6:
        cout << "Its Thursday."; break;
        case 7:
        cout << "Its Friday."; break;
        default:
        cout << "Wrong Input" << endl << " Number should be in the range of (1-7).";
    }
}