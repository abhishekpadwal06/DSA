#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(vector<int> arr, int n) {
    set<vector<int>> st;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
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

// TC - O(n^3 * log(no. of unoque triplets))
// SC - 2 * O(no.of triplets)