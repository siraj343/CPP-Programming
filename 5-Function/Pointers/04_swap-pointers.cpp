#include <iostream>
using namespace std;

void printSwap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 2;
    int y = 5;
    cout << x << " " << y << endl;
    printSwap(&x,&y);
    cout << x << " " << y;
}