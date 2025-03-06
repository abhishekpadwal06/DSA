#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[8] = {1, 9, 9, 9, 9, 9, 7, 7};
    int n = 8;
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > (n / 2)) {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}