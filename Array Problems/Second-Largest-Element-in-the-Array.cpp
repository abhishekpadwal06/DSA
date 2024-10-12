#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n) {
    int largest_no = arr[0];
    int second_largest_no = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] > largest_no) {
            second_largest_no = largest_no;
            largest_no = arr[i];
        }
        else if(arr[i] < largest_no && arr[i] > second_largest_no) {
            second_largest_no = arr[i];
        }
    }
    return second_largest_no;
}
int main()  {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ans = second_largest(arr, n);
    cout<<"Second largest element is: "<<ans;
    return 0;
}