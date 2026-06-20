#include<iostream>
using namespace std;


/*
Question 4 (Moderate)

Take a student's marks as input.

35 to 100  -> Pass
0 to 34    -> Fail
Otherwise  -> Invalid Marks
*/

int main() {
    int marks;
    cout <<"Enter your marks: ";
    cin >> marks;

    if (marks >= 35 && marks <= 100)
    {
        cout <<"Pass";
    } else if (marks >= 0 && marks <=34)
    {
        cout <<"Fail";
    }
    else {
        cout <<"Invalid marks";
    }
    
}