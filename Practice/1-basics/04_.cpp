#include<iostream>
using namespace std;

/*
Question 4 (Moderate)

Take the radius of a circle as input and print:
1. Diameter
2. Circumference
3. Area

Use:
PI = 3.14
*/

int main() {
    int r;
    float pi = 3.14;
    cout <<"Enter radius: ";
    cin >>r;
    cout <<"Diameter: "<<2*r<<endl;
    cout <<"Circumference: "<<2*pi*r<<endl;
    cout <<"Area: "<<pi*r*r<<endl;
}