#include<bits/stdc++.h>
using namespace std;
vector<int> UnionArray(int arr1[], int arr2[], int m, int n) {
    set<int> st;
    for(int i=0; i<m; i++) {
        st.insert(arr1[i]);
    }
    for(int i=0; i<n; i++) {
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : st) {
        temp.push_back(it);
    }
    return temp;
}
int main() {
    set<int> st;
    int m, n;
    cout<<"Enter size of arr1: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter arr1 elements: ";
    for(int i=0; i<m; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter size of arr2: ";
    cin>>n;
    int arr2[n];
    cout<<"Enter arr2 elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr2[i];
    }
    vector<int> ans = UnionArray(arr1, arr2, m, n);
    cout<<"Union of 2 arrays: ";
    for(auto i : ans) {
        cout<<i<<" ";
    }
    return 0;
}