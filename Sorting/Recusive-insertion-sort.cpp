#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n) {
    if(n==1)    return;
    for(int i=0; i<n; i++) {
        int j=i;
        if(j>0 && arr[j-1]<arr[j]) {       
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    n=n-1;
    insertion_sort(arr, n);
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
    insertion_sort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
    return 0;
}