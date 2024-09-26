#include <bits/stdc++.h>
using namespace std;
void FinalMerge(int arr[], int low, int mid, int high) {
    int left = low;                 //start point of left half of array
    int right = mid+1;              //start point of right half of array
    vector<int>temp;                //Temporary vector
    while(left<=mid && right<=high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++) { 
        arr[i] = temp[i - low];
    }
}
void mergeSort(int arr[], int low, int high) {
    //Base Case
    if(low>=high)   return;
    int mid =(low+high)/2;
    mergeSort(arr, low, mid);                       //Left half of array
    mergeSort(arr, mid+1, high);                    //Right half of array
    FinalMerge(arr, low, mid, high);                //Final merging
}
int main()
{
    int n;
    cout<<"\nEnter array size: ";
    cin>>n;
    int arr[n+1];                                
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1);
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
    return 0;
}