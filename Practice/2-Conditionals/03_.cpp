#include<iostream>
using namespace std;


/*
Question 3 (Moderate)

Take three integers as input.

Print the largest number.

If all three numbers are equal,
print:
All numbers are equal.
*/

int main() {
    int a, b, c;
    cout <<"Enter three numbers: ";
    cin >>a>>b>>c;

    if (a>=b && a>=c)
    {
        cout << "largest number is "<<a;
    } else if (b>=a && b >= c) {
        cout <<"largest number is: "<<b;
    } else if (c>=a && c>=b) {
        cout <<"largest number is :"<<c;
    }
    else {
        cout <<"all numbers are equal";
    }
    
}