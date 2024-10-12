// https://leetcode.com/problems/remove-element/
#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>&arr, int n, int val) {
    int i=0;
    int cnt=0;
    for(int j=0; j<n; j++) {
        if(arr[j]!=val) {
            arr[i]=arr[j];
            i++;
            cnt++;
        }
    }
    cout<<"New array: ";
    for(int a=0; a<i; a++) {
        cout<<arr[a]<<" ";
    }
    return cnt;
}
int main()
{
    int n, val;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter array elements: ";
    int ans;
    for(int i=0; i<n; i++) {
        cin>>ans;
        arr.emplace_back(ans);
    }
    cout<<"Enter value to be removed: ";
    cin>>val;
    int k = removeElement(arr, n, val);
    cout<<"\nThe number of remaining elements: "<<k;
    return 0;
}