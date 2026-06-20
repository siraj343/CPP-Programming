#include<iostream>
using namespace std;

int main() {
    int sub1,sub2,sub3,sub4,sub5;
    cout <<"Enter subjects marks: ";
    cin >>sub1>>sub2>>sub3>>sub4>>sub5;

    int total = sub1+sub2+sub3+sub4+sub5;
    float percentage = (total/500.0)*100;
    cout <<"Total: "<<total<<endl;
    cout<<"Percentage: "<<percentage;
}