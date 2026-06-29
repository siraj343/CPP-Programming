#include<iostream>
using namespace std;

void printNames(int i, int n){
    if (i > n) return;
    cout<<"Siraj"<<endl;
    printNames(i+1,n);
}
int main() {
    int n;
    int i=1;
    cout <<"Enter N: ";
    cin >> n;
    printNames(i, n);
}