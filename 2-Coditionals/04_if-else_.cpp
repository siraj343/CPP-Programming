#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if ((a+b)>c and (b+c)>a and (a+c)>b)
    {
        cout << "Valid traingle"<<endl;
    }else{
        cout << "invalid triangle"<<endl;
    }
    
    return 0;
}