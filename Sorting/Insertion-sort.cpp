#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}