#include<iostream>
using namespace std;

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