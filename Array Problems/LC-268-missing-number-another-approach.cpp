#include <bits/stdc++.h>
using namespace std;
void missNum(int arr[], int n) {
    int expSum = n*(n+1)/2;
    int actSum = 0;
    for(int i=0; i<n; i++) {
        actSum += arr[i];
    }
    int diff = expSum - actSum;
    cout<<"The missing number is: "<<diff;
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    missNum(arr, n);
    return 0;
}