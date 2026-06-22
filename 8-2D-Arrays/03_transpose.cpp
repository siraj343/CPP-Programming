#include<iostream>
using namespace std;

int main() {
    int arr[2][3]; 
    cout <<"Enter 2D arrays: ";
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            cin >>arr[i][j];
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
        
    }
    
}