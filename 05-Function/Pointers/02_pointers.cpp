#include<iostream>
using namespace std;

int main (){
    int x = 3;
    int* p;
    p =&x;
    cout <<p<<endl;
    cout<<*p<<endl; // star operator / dereference operator
    cout <<&p<<endl;
}
