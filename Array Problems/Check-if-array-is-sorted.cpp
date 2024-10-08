#include<bits/stdc++.h>
using namespace std;
int SortArray(int arr[], int n) {
    for(int i=1; i<n; i++) {
        if(arr[i] >= arr[i-1]) {

        }
        else {
            return false;
        }
    }
    return true;
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
        cout<<"Array is not sorted";
    }
    else {
        cout<<"Array is sorted";
    }
    return 0;
}