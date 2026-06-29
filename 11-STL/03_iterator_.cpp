#include<bits/stdc++.h>
using namespace std;

void explainIterator() {
    vector<int> v = {10, 20, 30, 40, 50};
    //deletion function
    v.erase(v.begin()+1, v.begin()+4); // {10, 50}

    // Insertion function
    v.insert(v.begin()+1,2,5);
    
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it)<<" ";
    }
}
int main() {
    explainIterator();
}