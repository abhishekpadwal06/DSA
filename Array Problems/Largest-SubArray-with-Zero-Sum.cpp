#include<bits/stdc++.h>
using namespace std;
int ZeroSum(vector<int> arr, int n) {
    int sum = 0, maxlen = 0;
    unordered_map<int, int> hashmap;
    for(int i=0; i<n; i++) {
        sum+= arr[i];
        if(sum == 0) {
            maxlen = i + 1;
        }
        else {
            if(hashmap.find(sum) != hashmap.end()) {
                maxlen = max(maxlen, i - hashmap[sum]);
            }
            else {
                hashmap[sum] = i;
            }
        }
    }
    return maxlen;
}
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cout<<"arr"<<i<<"[ = ";
        cin>>arr[i];
    }
    int ans = ZeroSum(arr, n);
    cout<<"Length = "<<ans<<endl;
    return 0;
}