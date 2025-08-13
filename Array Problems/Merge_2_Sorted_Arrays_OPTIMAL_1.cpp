#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = 0;
    while (i >= 0 && j < n) {
        if (nums1[i] > nums2[j]) {
            swap(nums1[i], nums2[j]);
        }
        i--;
        j++;
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    cout << "Sorted array 1 - ";
    for (int i = 0; i < m; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    cout << "Sorted array 2 - ";
    for (int i = 0; i < n; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;
}

int main() {
    int m, n;
    cout << "Enter array 1 size: ";
    cin >> m;
    cout << "Enter array 2 size: ";
    cin >> n;

    vector<int> nums1(m);
    vector<int> nums2(n);

    cout << "Enter array 1 - \n";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter array 2 - \n";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);
    return 0;
}
