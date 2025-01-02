#include<bits/stdc++.h>
using namespace std;
void sub_arr(int arr[], int n, int target) {
    int right = 0, left = 0, sum=arr[0], len=0;
    while(right < n) {
        while (left <= right && sum > target) {
            sum -= arr[left];
            left++;
        }
        
        if (sum == target) {
            len = max(len, right - left + 1);
        }
        
        right++;

        if (right < n) {
            sum += arr[right];
        }
    }

    cout<<"The length of the longest sub-array is: "<<len;
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
    cout<<"Enter a number: ";
    cin>>target;
    sub_arr(arr, n, target);
    return 0;
}