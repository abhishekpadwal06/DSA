#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n) {
    int largest_no = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] > largest_no) {
            largest_no = arr[i];
        }
    }
    return largest_no;
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
    int ans = largest(arr, n);
    cout<<"Second largest element is: "<<ans;
    return 0;
}