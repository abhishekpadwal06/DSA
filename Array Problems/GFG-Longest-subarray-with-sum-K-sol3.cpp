#include<bits/stdc++.h>
using namespace std;
int Longest_Subarray(int arr[], int n, int k) {
    map <long long, int> mpp;
    int maxlen = 0;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
        if(sum == k) {
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum - k;
        if(mpp.find(rem) != mpp.end()) {
            int len = i - mpp[rem];
            maxlen = max(maxlen, len);
        }
        if(mpp.find(sum) == mpp.end()) {
            mpp[sum] = i;
        }
    }
    return maxlen;
}
int main() {
    int k, n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter a number: ";
    cin>>k;
    int ans = Longest_Subarray(arr, n, k);
    cout<<"Maximum Length = "<<ans;
    return 0;
}