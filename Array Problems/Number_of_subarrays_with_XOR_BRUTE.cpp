#include<bits/stdc++.h>
using namespace std;
int xorrSubarrays(int arr[], int n, int k) {
    int count = 0;
    for(int i=0; i<n; i++) {
        int xorr = arr[i];
        for(int j=i; j<n; j++) {
            xorr ^= arr[j];
            if(xorr == k) {
                count++;
            }
        }
    }
    return count;
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