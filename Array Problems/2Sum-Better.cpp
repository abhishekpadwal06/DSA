#include<bits/stdc++.h>
using namespace std;
void TwoSum(int arr[], int n, int target) {
    int flag = 0;
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()) {
            flag = 1;
            cout<<"YES"<<endl;
            cout<<mpp[more]<<", "<<i<<endl;
        }
        mpp[a] = i;
    }
    if(flag != 1) {
        cout<<"NO"<<endl;
        cout<<"-1, -1"<<endl;
    }
}

int main() {
    int n, target;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Emter target element: ";
    cin>>target;
    TwoSum(arr, n, target);
    return 0;
    return 0;
}