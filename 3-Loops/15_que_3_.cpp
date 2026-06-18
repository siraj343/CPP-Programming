#include<iostream>
using namespace std;

// WAP to print product of digits 

int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;
    int prod=1;
    
    while (n!=0)
    {
        int ld=n%10;
        n=n/10;
        prod = prod*ld;;
    }
    cout << "sum of digits: "<<prod;

    return 0;
}