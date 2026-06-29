#include<bits/stdc++.h>
using namespace std;

void explainVectors() {
    vector<int> v;
    
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0];
    cout<<endl;

    vector <pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,3);
    cout << vec[1].second<<" "<<vec[0].first<<" "<<vec[0].second;
    cout<<endl;

    vector<int> vecc(5,100); // {100, 100, 100, 100, 100}
    cout <<vecc[3]; // index = 0;
}
int main() {
    explainVectors();
}