// https://leetcode.com/problems/remove-element/
#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int i=0;
    int cnt=0;
    for(int j=0; j<nums.size(); j++) {
        if(nums[j]!=val) {
            nums[i] = nums[j];
            i++;
            cnt++;
        }
    }
    return cnt;
}
int main() {
    vector<int> nums;
    int val, n, x;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter element to be removed: ";
    cin>>val;
    int ans = removeElement(nums, val);
    cout<<ans;
    return 0;
}