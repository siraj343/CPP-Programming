#include<iostream>
using namespace std;


/*
Question 6 (Hard)

Take a character as input.

If it is a vowel
(a, e, i, o, u and uppercase vowels)

Print:
Vowel

Otherwise print:
Consonant
*/

int main(){
    char ch;
    cout <<"Enter character: ";
    cin >>ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout <<"Vowel";
    } else{
        cout <<"consonant";
    }
    
}