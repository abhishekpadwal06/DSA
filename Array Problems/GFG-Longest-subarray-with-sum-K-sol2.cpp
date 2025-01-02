// BRUTE APPROACH - 2

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& arr, long long k) {
    int n = arr.size();

    int len = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(arr, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}