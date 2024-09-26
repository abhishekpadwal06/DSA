#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n) {
    if(n==1)   return;     // BASE CASE
    for(int i=0; i<(n-1); i++) {    //Remember this is BUBBLE SORT therefore loop will go till (n-1)
        if(arr[i]>arr[i+1]) {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    n = n-1;    // DECREASING THE RANGE
    bubbleSort(arr, n);     // RECURSION
}
int main()
{
    int n;
    cout<<"\nEnter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
    return 0;
}