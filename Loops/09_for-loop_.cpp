#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    bool flag=true; // true means no is prime
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            flag = false; // false means no is composite
            break;
        }
        
        
    }
    if(n==1) cout << "Neither prime Nor composite";
    else if (flag==true)
        {
            cout <<"Prime";
        }else{
            cout <<"Composite";
        }
    
    return 0;
}