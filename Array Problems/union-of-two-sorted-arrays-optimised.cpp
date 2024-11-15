#include<bits/stdc++.h>
using namespace std;
vector<int> UnionArray(int arr1[], int arr2[], int m, int n) {
    vector<int> temp;
    int i=0, j=0;
    while(i<m && j<n) {
        if(arr1[i]<=arr2[j]) {
            if(temp.size() == 0 || temp.back() != arr1[i]) {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(temp.size() == 0 || temp.back() != arr2[j]) {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<m) {
        if(temp.size() == 0 || temp.back() != arr1[i]) {
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n) {
        if(temp.size() == 0 || temp.back() != arr2[j]) {
            temp.push_back(arr2[j]);
        }
        j++;
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