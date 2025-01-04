#include<bits/stdc++.h>
using namespace std;
int main() {
    int maxi = 0, n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }
    cout<<maxi;
    return 0;
}