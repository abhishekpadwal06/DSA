#include<bits/stdc++.h>
using namespace std;
int longestMountain(vector<int>& arr) {
    int ans = 0;
    int n = arr.size();
    for(int i=0; i<n; i++) {
        int inc = 0, dec = 0;
        for(int j=i; j<(n-1); j++) {
            if(arr[j+1] > arr[j] && (dec==0)) {
                inc++;
            }
            else if((arr[j+1] < arr[j]) && (inc!=0)) {
                dec++;
            }
            else {
                break;
            }
        }
        if((inc!=0) && (dec!= 0) && (ans < (inc+dec+1))) {
            ans = inc + dec + 1; 
        }
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Etner array elements: \n";
    for(int i=0; i<n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    int ans = longestMountain(arr);
    cout<<"Length = "<<ans<<endl;
    return 0;
}