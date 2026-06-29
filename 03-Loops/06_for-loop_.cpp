#include<iostream>
using namespace std;

// for GP

int main(){
    int a=1;
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout <<a<<" ";
        a=2*a;
    }
    
    return 0;
}