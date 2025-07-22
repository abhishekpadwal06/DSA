// Print any nth row of the pascal's triangle

// BRUTE

#include<bits/stdc++.h>
using namespace std;
void NcR(int r, int c) {
    int res = 1;
    for(int i=0; i<c; i++) {
        res = res * (r-i);
        res = res / (i+1);
    }
    cout<<res<<" ";
}
int main() {
    int r, c;
    cout<<"Enter number of rows: ";
    cin>>r;    
    cout<<"Enter number of cols: ";
    cin>>c;
    for(int i=1; i<=r; i++) {
        NcR(r-1, c-1);
        c--;
    }
    return 0;
}

// TC = O(r * c)
// SC = O(1)




// OPTIMAL
void NcR(int r, int c) {
    int ans = 1;
    for(int i=1; i<=r; i++) {
        cout<<ans<<" ";
        ans = ans * (r-i);
        ans = ans / i;
    }
}
int main() {
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;    
    int c = r;
    NcR(r, c);
    return 0;
}
