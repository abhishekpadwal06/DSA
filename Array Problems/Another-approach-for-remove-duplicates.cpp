// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/ 
                                    //OPTIMAL APPROACH
                                    //TC = O(N)
                                    //SC = O(1)
#include<bits/stdc++.h>
using namespace std;
void rem_duplicates(int arr[], int n) {
    int i=0;
    for(int j=1; j<n; j++) {
        if(arr[i]!=arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    i = i+1;
    cout<<"New Array = ";
    for(int a=0; a<i; a++) {
        cout<<arr[a]<<" ";
    }
}
int main () {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    rem_duplicates(arr, n);
    return 0;
}