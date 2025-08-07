#include<bits/stdc++.h>
using namespace std;
int xorrSubarrays(int arr[], int n, int k) {
    map<int, int> mpp;
    int maxlen = 0;
    int xorr = 0;
    for(int i=0; i<n; i++) {
        xorr ^= arr[i];
        if(xorr == k) {
            maxlen = max(maxlen, i + 1);
        }
        int x = xorr ^ k;
        if(mpp.find(x) != mpp.end()) {
            int len = i - mpp[x];
            maxlen = max(maxlen, len);
        } 
        if(mpp.find(xorr) == mpp.end()) {
            mpp[xorr] = i;
        }
    }
    return maxlen;
}
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter xor element: ";
    cin>>k;
    int ans = xorrSubarrays(arr, n, k);
    cout<<"\nSubarrays: "<<ans<<endl;
    return 0;
}