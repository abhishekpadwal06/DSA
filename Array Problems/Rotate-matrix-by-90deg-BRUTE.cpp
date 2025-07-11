#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows/columns of your square matrix: ";
    cin>>n;
    int matrix[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<"arr["<<i<<"]"<<"["<<j<<"] = ";
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    int res[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            res[j][(n - i) -1] = matrix[i][j];
        }
    }

    cout<<"Rotated Matrix: \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}