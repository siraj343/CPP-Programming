#include<iostream>
using namespace std;


/*
Question 5 (Hard)

Take a year as input.

Check whether it is a Leap Year or Not a Leap Year.

Rules:
1. Divisible by 400 -> Leap Year
2. Divisible by 100 -> Not Leap Year
3. Divisible by 4 -> Leap Year
4. Otherwise -> Not Leap Year
*/

int main() {
    int year;
    cout <<"Enter year: ";
    cin >>year;
    if (year %400 == 0)
    {
        cout <<"Yes its leap year";
    } else if (year %100 == 0)
    {
        cout <<"NO its not leap year";
    } else if (year %4 ==0)
    {
        cout <<"Yes its leap year";
    } else {
        cout <<"NO its not leap year";
    }
    
    
    
}