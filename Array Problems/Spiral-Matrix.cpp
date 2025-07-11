// This has only 1 solution And that is the optimal one.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    
    cout<<"Enter the numebr of rows: ";
    cin>>m;
    
    cout<<"Enter the numebr of columns: ";
    cin>>n;
    
    vector<vector<int>> matrix(m, vector<int>(n));        // Initialized a (m x n) matrix
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<"matrix["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }
    
    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = m - 1;

    while(left <= right && top <= bottom) {
        for(int i=left; i<=right; i++) {
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i=top; i<=bottom; i++) {
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top <= bottom) {
            for(int i=right; i>=left; i--) {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left <= right) {
            for(int i=bottom; i>=top; i--) {
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
    }
    return 0;
}