// https://leetcode.com/problems/missing-number/description/
/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

BRUTEFORCE APPROACH :-
    First we should sort the array abd then traverse through the array and then find the missing number and then print it.
*/

#include <bits/stdc++.h>
using namespace std;
void sort (int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<(n-1); j++) {
            if(arr[j+1]<arr[j]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void missingNumber(int arr[], int n) { 
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]==cnt) {
            cnt++;
        }
        else {
            break;
        }
    }
    cout<<"The missing number is: "<<cnt;
}
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr, n);
    missingNumber(arr, n);
    
    return 0;
}