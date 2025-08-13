#include<bits/stdc++.h>
using namespace std;
class solution{
private:
    void swapIfGreater(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2) {
        if(nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }
public:
    void merge(vector<int>& nums1, int m,vector<int>& nums2, int n) {
        int len = (m + n);
        int gap = (len / 2) + (len % 2);
        while(gap > 0) {
            int left = 0;
            int right = left + gap;
            while(right < len) {
                // nums1 and nums2 
                if(left < m && right >= n) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }
                // nums2 and nums2
                else if(left >= m) {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                }
                // nums1 and nums1
                else {
                    swapIfGreater(nums1, nums1, left, right);
                }
            }
            left++, right++;
            if(gap == 1)    break;
            gap = (gap / 2) + (gap % 2);
        }

        cout<<"Sorted arrays: \nnums1: ";
        for(int i=0; i<m; i++) {
            cout << nums1[i] << " ";
        }
        cout<<"\nnums2: ";
        for(int i=0; i<n; i++) {
            cout << nums2[i] << " ";
        }
        cout<<endl;
    }
};
int main() {
    int m, n;
    cout << "Enter array 1 size: ";
    cin >> m;
    cout << "Enter array 2 size: ";
    cin >> n;

    vector<int> nums1(m), nums2(n);

    cout << "Enter array 1 - \n";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter array 2 - \n";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    solution s;
    s.merge(nums1, m, nums2, n);

    return 0;
}