#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[9] = {0, 2, 1, 2, 1, 1, 0, 1, 2};
    int low = 0, mid = 0, high = 8;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for(int i=0; i<9; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}