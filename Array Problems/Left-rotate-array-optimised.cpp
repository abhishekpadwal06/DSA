#include<bits/stdc++.h>
using namespace std;
void LeftRotateArray(int arr[], int d, int n) {
    if(d>n) {
        d = d % n;
    }
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
    cout<<"New rotated array: ";
    for(int i=0; i<n; i++) { 
        cout<<arr[i]<<" ";
    }
}
int main() {
    int d, n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter how many times you want to rotate the given array: ";
    cin>>d;
    LeftRotateArray(arr, d, n);
    return 0;
}