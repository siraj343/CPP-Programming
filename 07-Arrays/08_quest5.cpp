#include<iostream>
using namespace std;

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/4;
    int b[n];

    for (int i = 0; i < n; i++)
    {
        int j = n-1-i;
        b[i] = arr[j];
    }
    for (int i = 0; i < n; i++)
    {
       cout<<b[i]<<" ";
    }
    
    
}