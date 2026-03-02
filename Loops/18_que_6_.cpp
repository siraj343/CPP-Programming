#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin>>n;
    int r =0;
    int original = n;
    while (n !=0)
    {
        int ld=n%10;
         r = r*10;
        r = r+ld;
        n = n/10;

    }
    int sum = original + r;
    cout << r <<endl;
    cout << sum <<endl;
    return 0;
}