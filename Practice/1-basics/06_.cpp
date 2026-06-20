#include<iostream>
using namespace std;

/*
Question 6 (Hard)

Take the price of three items as input.

Print:
1. Total Price
2. GST (18%)
3. Final Amount to Pay

Formula:
GST = Total * 18 / 100
Final Amount = Total + GST
*/

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