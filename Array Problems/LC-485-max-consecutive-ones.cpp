// https://leetcode.com/problems/max-consecutive-ones/description/
#include <bits/stdc++.h>
using namespace std;
void MaxConsOnes(vector<int>&nums, int n) {
    int cnt=0, fcnt=cnt;
    for(int i=0; i<n; i++) {
        if(nums[i]==1) {
            cnt++;
        }
        else {
            cnt=0;
        }
        if(cnt > fcnt) {
            fcnt=cnt;           
        }
        // Alternative code for above part: 
        // fcnt = max(fcnt, cnt);
    }
    cout<<"Maximum number of consecutive ones: "<<fcnt;
}
int main()  
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>nums;
    int k;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>k;
        nums.push_back(k);
    }
    MaxConsOnes(nums, n);
    return 0;
}