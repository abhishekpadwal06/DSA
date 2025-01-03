#include<bits/stdc++.h>
using namespace std;
void TwoSum(int arr[], int n, int target) {
    int flag=0, sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=(i+1); j<n; j++) {
            sum = arr[i] + arr[j];
            if(sum == target) {
                flag = 1;
                cout<<"YES"<<endl;
                cout<<"arr["<<i<<", "<<j<<"]"<<endl;
                break;
            }
        }
    }
    if(flag != 1) {
        cout<<"NO"<<endl;
        cout<<"arr[-1, -1]"<<endl;
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
}