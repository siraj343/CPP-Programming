#include<iostream>
using namespace std;

void usa(){
    cout << "You are in usa"<<endl;
    return;
}

void india(){
    cout << "Your in india"<<endl;
    usa();
}
int main (){
    cout << "You are in main"<<endl;
    india();
    usa();
    return 0;
}