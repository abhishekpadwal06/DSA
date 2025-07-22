// Given rows & cols, find the element present at that place in the triangle.

#include<bits/stdc++.h>
using namespace std;
int NcR(int r, int c) {
    int res = 1;
    for(int i=0; i<c; i++) {
        res = res * (r-i);
        res = res / (i+1);
    }
    return res;
}
int main() {
    int r, c;
    cout<<"Enter number of rows: ";
    cin>>r;    
    cout<<"Enter number of cols: ";
    cin>>c;
    int ans = NcR(r-1, c-1);    
    cout<<"Element: "<<ans;
    return 0;
}