#include<bits/stdc++.h>
using namespace std;
void TwoSum(vector<int> &arr, int n, int target) {
    int i = 0, j = n - 1, sum = 0, flag = 0;
    sort(arr.begin(), arr.end());
    while(i < j) {
        sum = arr[i] + arr[j];
        if(sum == target) {
            flag = 1;
            cout<<"YES"<<endl;
            break;
        }
        else if(sum < target) {
            i++;
        }
        else {
            j--;
        }
    }
    if(flag != 1) {
        cout<<"NO"<<endl;
    }
}

int main() {
    int n, target;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter array elements: ";
    int x;
    for(int i=0; i<n; i++) {
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter target element: ";
    cin>>target;
    TwoSum(arr, n, target);
    return 0;
}