#include<iostream>
using namespace std;


int main (){
    int i; // this is scope variable
    for (i = 1; i <= 5; i++)
    {
        cout <<i<<endl;
    }
    cout <<i; // working bcz of i is declared outside of loop 
}