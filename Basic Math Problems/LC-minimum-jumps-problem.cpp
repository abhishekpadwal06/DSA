#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans, jumps, cnt=1, n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    if(n==0) {
        cout<<"Invalid";
        return 0;
    }
    if(n==1) {
        ans=0;
        cout<<"The minimum jumps are "<<ans;
        return 0;
    }
    if(arr[0]==0) {
        ans=-1;
        cout<<"The minimum jumps are "<<ans;
        return 0;
    }
    int *ptr = &arr[0];
    jumps=*ptr;
    for(int i=1; i<=jumps; i++) {
        while(cnt<=jumps) {
            ptr++;
            cnt++;
        }
        cnt=1;
        jumps=*ptr;
        ans++;
        if(ptr>=&arr[n-1]) {
            cout<<"MIN JUMPS = "<<ans;
            break;
        }
    }
    
    return 0;
}


// int *ptr=&arr[0];
//         jumps=*ptr;
//         for(int i=1; i<=jumps; i++){
//             while(cnt<=jumps) {
//                 ptr++;
//                 cnt++;
//             }
//             cnt=1;
//             jumps=*ptr;
//             if(ptr>=&arr[n-1]) {
//                 return i;
//                 return 0;
//             }
//         }