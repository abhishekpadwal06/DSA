#include<bits/stdc++.h>
using namespace std;
void RightRotate(vector <int> &arr, int d) {
    int c = arr.size();
    for(int j=0; j<d; j++) {
        int temp = arr[c-1];
        for(int i=c-1; i>0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
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
    RightRotate(arr, d);
    return 0;
}