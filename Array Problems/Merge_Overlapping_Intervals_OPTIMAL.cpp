#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> MergeOverlappingIntervals(vector<vector<int>> arr, int n) {
    sort(arr.begin(), arr.end()); // Sort by start time
    vector<vector<int>> ans;
    
    for (int i = 0; i < n; i++) {
        if(ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));         // IMPORTANT !!!

    cout << "Enter intervals (start end):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    vector<vector<int>> ans = MergeOverlappingIntervals(arr, n);

    cout << "Merged Intervals: ";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << "\n";

    return 0;
}
