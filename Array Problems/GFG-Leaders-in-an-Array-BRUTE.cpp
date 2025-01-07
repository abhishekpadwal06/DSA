#include<bits/stdc++.h>
using namespace std;
vector<int> ArrayLeaders(int arr[], int n) {
    vector <int> vec;
    int flag;
    for(int i=0; i<n; i++) {
        flag = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[j] > arr[i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            vec.push_back(arr[i]);
        }
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