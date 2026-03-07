#include<iostream>
using namespace std;

void usa(){
    cout << "You are in usa"<<endl;
    return;
}

void india(){
    cout << "You are in India"<<endl;
    usa();
}
int main(){
    cout << "You are in main"<<endl;
    usa();
    india();
    return 0;
}