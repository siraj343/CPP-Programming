#include<iostream>
using namespace std;

/*
Question 2 (Easy)

Write a C++ program to take a student's name and age as input and print:

Hello <name>!
You are <age> years old.

Example:
Input:
Siraj
20

Output:
Hello Siraj!
You are 20 years old.
*/

int main() {
    int age;
    string name;
    cout <<"Enter your name: ";
    cin >>name;
    cout <<"Enter your age: ";
    cin >>age;
    cout <<"Hello "<<name<<"!"<<endl;
    cout <<"You are "<<age<<" years old."<<endl;


}