// https://leetcode.com/problems/move-zeroes/description/
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>&arr, int n, int val) {
    int i=0;
    int cnt=0;
    for(int j=0; j<n; j++) {
        if(arr[j]!=val) {
            arr[i]=arr[j];
            i++;
        }
        else {
            cnt++;
        }
    }
    for(int k=cnt; k>0; k--) {
        arr[i] = val;
        i++;
    }
    cout<<"New array: ";
    for(int a=0; a<i; a++) {
        cout<<arr[a]<<" ";
    }
}
int main()
{
    int n, val=0;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter array elements: ";
    int ans;
    for(int i=0; i<n; i++) {
        cin>>ans;
        arr.emplace_back(ans);
    }
    moveZeroes(arr, n, val);
    return 0;
}