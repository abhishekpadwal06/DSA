#include<bits/stdc++.h>
using namespace std;
int SingleNumber(int arr[], int n) {
    int xorr = 0;
    for(int i=0; i<n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ans = SingleNumber(arr, n);
    cout<<ans;
    return 0;
}