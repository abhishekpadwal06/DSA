// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
                                    // BRUTEFORCE APPROACH
                                    // TC = O(N logN) + O(N)
                                    // SC = O(N)
#include<bits/stdc++.h>
using namespace std;
void remDup(int arr[]) { 
    set<int> st;
    for(int i=0; i<5; i++) {
        if(arr[i]==arr[i+1]) {

        }                                           // TC = O(N log N)
        else {
            st.insert(arr[i]);
        }
    }
    cout<<"New array = ";
    for(auto it:st) {
        cout<<it<<" ";                              // TC =O(N)
    }
}
int main() {
    int arr[5] = {1, 1, 2, 2, 3};
    remDup(arr);
    return 0;
}
