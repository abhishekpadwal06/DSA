#include<bits/stdc++.h>
using namespace std;
void LeftRotateArray(int arr[], int d, int n) {
    if(d>n) {
        d = d % n;
    }
    int temp[d];
    // Storing elements in temp[]
    for(int i=0; i<d; i++) {
        temp[i] = arr[i];
    }
    // Shifting of elements
    for(int i=d; i<n; i++) {
        arr[i-d] = arr[i];              
    }
    // Putting back temp[]
    for(int i = n-d; i<n; i++) {
        arr[i] = temp[i-(n-d)];
    }
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