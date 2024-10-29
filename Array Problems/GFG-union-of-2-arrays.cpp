#include<bits/stdc++.h>
using namespace std;
void unionArray(vector<int> &a, vector<int> &b, int m, int n) {
    
}
int main() {
    int x, y, m, n;
    cout<<"Enter array sizes for 1st & 2nd array: ";
    cin>>m>>n;
    vector <int> a, b;
    cout<<"Enter array a: ";
    for(int i=0; i<m; i++) {
        cin>>x;
        a.push_back(x);
    }
    cout<<"Enter array b: ";
    for(int i=0; i<n; i++) {
        cin>>y;
        a.push_back(y);
    }
    unionArray(a, b, m, n);
    return 0;
}