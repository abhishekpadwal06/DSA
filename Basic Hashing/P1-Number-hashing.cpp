// Count the frequency of array elements using Hashing method
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int hash[n+1]={0};
    for(int i=0; i<n; i++) { 
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter the number of elements whose frequency you need to find: ";
    cin>>q;
    while(q!=0) {
        int num;
        cout<<"Enter number you want to find the frequency of: ";
        cin>>num;
        cout<<"\nThe frequency of the number is: ";
        cout<<hash[num]<<" ";
        q--;
    }
    return 0;
} 