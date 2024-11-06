#include <bits/stdc++.h>
using namespace std;
void RotateRight(vector<int> &nums, int d) {
    reverse(nums.begin(), nums.begin()+(nums.size()-d));
    reverse(nums.begin()+(nums.size()-d), nums.end());
    reverse(nums.begin(), nums.end());
}
int main()
{
    vector <int> nums;
    int n, d, x;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter how many times you want to rotate the array: ";
    cin>>d;
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>x;
        nums.push_back(x);
    }
    RotateRight(nums, d);
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}