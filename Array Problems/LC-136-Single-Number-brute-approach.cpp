#include<bits/stdc++.h>
using namespace std;
int SingleNumber(int arr[], int n) {
    int temp, i=0;
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp.emplace(arr[i], 0);
    }
    while(i<n) {
        mpp[arr[i]]++;
        i++;
    }
    for(auto it : mpp) {
        if(it.second == 1) {
            temp = it.first;
        }
    }
    return temp;
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