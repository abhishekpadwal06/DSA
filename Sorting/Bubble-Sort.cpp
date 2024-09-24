#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<(n-1); j++) {
            if(arr[j+1]<arr[j]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
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
    bubble_sort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}