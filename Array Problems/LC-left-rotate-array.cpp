#include<bits/stdc++.h>
using namespace std;
void LeftRotate(vector <int> &arr, int d) {
    for(int j=0; j<d; j++) {
    int temp = arr[0];
    for(int i=1; i<arr.size(); i++) {
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp;
    }
    cout<<"New array: ";
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    vector<int> arr;
    int x, n;
    cout<<"Enter array size: ";
    cin>>n;
    int d;
    cout<<"Enter how many times you want to rotate the array: ";
    cin>>d;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>x;
        arr.push_back(x);
    }
    LeftRotate(arr, d);
    return 0;
}