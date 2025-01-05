#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int mini = arr[0], profit = 0;
    for(int i=0; i<n; i++) {
        int cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }
    cout<<"Profit = "<<profit;
    return 0;
}