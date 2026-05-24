#include<bits/stdc++.h>
using namespace std;
vector<int> nextLargerElement(vector<int>& arr) {
    vector<int> ans(arr.size());
    for(int i=0;i<arr.size();i++){
        ans[i]=-1;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {6, 0, 8, 1, 3};
    vector<int> ans = nextLargerElement(arr);
    cout<<endl;
    for(auto it : ans) {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}