#include<iostream>
using namespace std;

// WAP to print sum of digits 

int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;
    int sum=1;
    
    while (n!=0)
    {
        int ld=n%10;
        n=n/10;
        sum = sum+ld;;
    }
    cout << "sum of digits: "<<sum;

    return 0;
}