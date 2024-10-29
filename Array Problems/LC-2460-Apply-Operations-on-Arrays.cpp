#include <bits/stdc++.h>
using namespace std;
void Operations(vector<int>&nums) {
    for(int i=0; i<nums.size()-1; i++) {
        if(nums[i]==nums[i+1] && nums[i]!=0) {
            nums[i] *= 2;
            nums[i+1] = 0;
        }
    }
    int val = 0, j=0;
    for(int a=0; a<nums.size(); a++) {
        if(nums[a]!=val) {
            nums[j++] = nums[a];
        }
    }
    while(j<nums.size()) {
        nums[j++] = val;
    }
}
int main()
{
    int x, n;
    vector<int> nums;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>x;
        nums.push_back(x);
    }
    Operations(nums);
    for(int a=0; a<nums.size(); a++) {
        cout<<nums[a]<<" ";
    }
    return 0;
}