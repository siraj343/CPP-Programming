#include<iostream>
using namespace std;

int main() {
    int item1,item2,item3;
    cout <<"Enter items: ";
    cin >>item1>>item2>>item3;

    int total = item1 + item2 + item3;
    float gst = total * 18/100.0;
    float finalAmount = total + gst;

    cout <<"Total: "<<total<<endl;
    cout <<"GST(18%): "<<gst<<endl;
    cout <<"Final Amount to pay: "<<finalAmount;
}