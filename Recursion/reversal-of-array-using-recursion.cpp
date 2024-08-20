#include <bits/stdc++.h>
using namespace std;
void func(int i, int arr[], int n) { 
    if(i>=n/2)  {
        return;
    }
    swap(arr[i], arr[n-i-1]);
    func(i+1, arr, n);
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    func(0, arr, n);

    cout<<"The reversed array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}