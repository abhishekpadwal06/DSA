#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> quads(vector<int>nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                for(int l=k+1; l<n; l++) {
                    long long sum = nums[i] + nums[j] + nums[k];
                    sum += nums[l];
                    if(sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
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
    vector<vector<int>> ans = quads(arr, target);
    for(auto &it : ans) {
        for(auto val : it) {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}