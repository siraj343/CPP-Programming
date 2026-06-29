#include<bits/stdc++.h>
using namespace std;

void explainPairs() {
    pair<int, int> p = {2, 3};
    cout <<p.first<<" "<<p.second;
    cout<<endl;

    pair<int, pair <int, int>> u = {4, {5, 6}};
    cout<<u.first<<" "<<u.second.first<<" "<<u.second.second;
    cout<<endl;

    pair <int, int> arr[] = {{1,2}, {1,3}, {1,4}};
    cout << arr[2].first;
}
int main() {
    explainPairs();
}