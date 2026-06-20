#include<iostream>
using namespace std;

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