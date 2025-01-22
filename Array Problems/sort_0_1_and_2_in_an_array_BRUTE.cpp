#include<bits/stdc++.h>
using namespace std;
void sortArr(int arr[], int n) {
    for(int i=0; i<(n-1); i++) {        // Cond'n for outer loop (No. of swaps)
        int min = i;
        for(int j=i+1; j<n; j++) {      // Cond'n for inner loop (No. of iterations)
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
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
    sortArr(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// TC = O(N(N+1))/ 2