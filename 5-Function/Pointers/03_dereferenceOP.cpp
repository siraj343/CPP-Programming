#include<iostream>
using namespace std;

int main (){
    int x = 30;
    int* ptr =&x;
    cout<<x<<endl;
    *ptr = 40;
    cout<<x<<endl;
    
    
}
