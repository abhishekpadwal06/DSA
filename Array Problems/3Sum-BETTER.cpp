#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(vector<int> arr, int n) {
    set<vector<int>> st;
    for(int i=0; i<n; i++) {
        set<int> hashset;
        for(int j=i+1; j<n; j++) {
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third) != hashset.end()) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);   
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    vector<vector<int>> ans = triplet(arr, n);
    cout<<"\nTriplets - \n\n";
    for(auto &it : ans) {
        for(auto val : it) {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// TC - O(n^2 * log(m))     ... m = elements present in hashset (varying everytime)
// SC - 2 * O(no. of triplets)