// Given number of rows, print the triangle

// BRUTE 

#include<bits/stdc++.h>
using namespace std;
void NcR(int r) {
    for(int i=0; i<r; i++) {
        int ans = 1;
        for(int j=0; j<=i; j++) {
            cout<<ans<<" ";
            ans = ans * (i-j);
            ans = ans / (j+1);
        }
        cout<<endl;
    }
}
int main() {
    int r;
    cout<<"Enter rows: ";
    cin>>r;
    NcR(r);
    return 0;
}

// TC = O(c*r)
// SC = O(1)




// OPTIMAL
