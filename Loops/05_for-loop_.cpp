#include<iostream>
using namespace std;

int main(){
    int a=4;
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout <<a<<" ";
        a=a+3;
    }
    
    return 0;
}