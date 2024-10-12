#include <bits/stdc++.h>
using namespace std;
int searchInSorted(int arr[], int N, int K) {
        int cnt;
        for(int i=0; i<N; i++) {
            if(arr[i]==K) {
                cnt=1;
                return cnt;
            }
            else {
                cnt=-1;
            }
        }
        return cnt;
}
int main()
{
    int N;
    cout<<"Enter array size: ";
    cin>>N;
    int arr[N];
    cout<<"Enter array: ";
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    int K;
    cout<<"Enter the number to be checked: ";
    cin>>K;
    int ans = searchInSorted(arr, N, K);
    cout<<ans;
    return 0;
}