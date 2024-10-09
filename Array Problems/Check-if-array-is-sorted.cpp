#include<bits/stdc++.h>
using namespace std;
int SortArray(int arr[], int n) {
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] >= arr[i+1]) {
            cnt+=1;         // Array is not sorted
        }
        else {
            // Array is sorted already
        }
    }
    return cnt;
}
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int check = SortArray(arr, n);
    if(check == 0) {
        cout<<"Array is sorted";
    }
    else {
        cout<<"Array is not sorted";
    }
    return 0;
}