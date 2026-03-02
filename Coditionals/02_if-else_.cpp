#include<iostream>
using namespace std;

int main(){
    int cp, sp;
    cin>>cp;
    cin>>sp;

    if (sp>cp)
    {
        cout <<"profit is: "<<sp-cp<<endl;
    }
    else if (sp<cp)
    {
        cout <<"Loss is: "<<cp-sp<<endl;
    }
    else{
        cout <<"No loss ! No Profit"<<endl;
    }
    
    
    return 0;
}