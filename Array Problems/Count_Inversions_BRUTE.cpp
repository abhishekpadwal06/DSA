#include<bits/stdc++.h>
using namespace std;
int countInversions (vector<int> nums, int n) {
    int count = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if((i<j) && (nums[i] > nums[j])) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int n;
    
    cout<<"Enter array size: ";
    cin>>n;
    
    vector<int> nums(n);

    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>nums[i];
    }

    int ans = countInversions(nums, n);

    cout<<"Count: "<<ans;
    cout<<endl;

    return 0;
}