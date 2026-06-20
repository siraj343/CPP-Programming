#include<iostream>
using namespace std;


/*
Question 2 (Easy)

Take an integer as input.

If number > 0
Print:
Positive Number

Else if number < 0
Print:
Negative Number

Else
Print:
Zero
*/

int main() {
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout <<"Positive number";
    } else if(num < 0) {
        cout <<"Negative number";
    } else {
        cout <<"number is zero";
    }
    
}