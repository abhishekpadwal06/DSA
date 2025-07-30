#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++) {
        if(i > 0 && nums[i] == nums[i-1])   continue;
        for(int j=i+1; j<n; j++) {
            if(j != i+1 && nums[j] == nums[j-1])    continue;
            int k = j+1;
            int l = n-1;
            while(k < l) {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    res.push_back(temp);
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k-1])    k++;
                    while(k < l && nums[l] == nums[l+1])    l--;
                }
                else if(sum < target) {
                    k++;
                }
                else {
                    l--;
                }
            }
        }
    }
    return res;
}
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr(n);
    int target;
    cout<<"Enter target variable: ";
    cin>>target;
    cout<<"Etner array elements: \n";
    for(int i=0; i<n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    vector<vector<int>> ans = fourSum(arr, target);
    for(auto &it : ans) {
        for(auto val : it) {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}