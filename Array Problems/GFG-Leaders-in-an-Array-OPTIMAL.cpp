#include<bits/stdc++.h>
using namespace std;
vector<int> ArrayLeaders(int arr[], int n) {
    vector <int> vec;
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxi) {
            vec.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    return vec;
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
    vector<int> ans = ArrayLeaders(arr, n);
    cout<<"Leaders: ";
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}