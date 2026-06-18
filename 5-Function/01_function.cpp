#include<iostream>
using namespace std;

void printGreet(){
    cout << "Good morning"<<endl;
    cout <<"How are you"<<endl;
}

void usa() {
    cout << "I am in usa right now"<<endl;
    return;
    cout <<"I am in usa"<<endl;
}

int main(){
    cout << "First print"<<endl;
    printGreet();
    usa();
    cout << "last code"<<endl;
}