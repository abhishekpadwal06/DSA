#include <bits/stdc++.h>
using namespace std;
void MaxConsOnes(vector<int>&nums, int n) {
    int i=0, cnt=0, fcnt=0;
    for(int i=0; i<n; i++) {
    if(nums[i]==1) {
        cnt++;
    }
    else {
        cnt=0;
    }
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