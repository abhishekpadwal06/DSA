#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows/columns for your square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));  // Initialize n x n matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    cout << "\nRotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
