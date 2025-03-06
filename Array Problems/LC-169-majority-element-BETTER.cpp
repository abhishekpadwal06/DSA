#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[8] = {1, 9, 9, 9, 9, 9, 7, 7};
    int n = 8;
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it : mpp) {
        if(it.second > n/2) {
            cout<<it.first;
            break;
        }
    }
    return 0;
}