#include <iostream>
using namespace std;

void printSwap(int& x, int& y) // & indicates ---> pass by refrence
{
    int temp;
    temp = x;
       x = y;
       y = temp;
}
int main()
{
    int x = 2;
    int y = 5;
    cout << x << " " << y << endl;
    printSwap(x,y);
    cout << x << " " << y;
}