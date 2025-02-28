#include<bits/stdc++.h>
using namespace std;
vector<int> IntersectionArray(int a[], int b[], int n1, int n2) {
    int vis[n2] = {0};
    vector<int> temp;
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            if(a[i]==b[j] && vis[j]==0) {
                temp.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]) {
                break;
            }
        }
    }
    return temp;
}
int main() {
    int n1, n2;
    cout<<"Enter Array 1 size: ";
    cin>>n1;
    cout<<"Enter Array 2 size: ";
    cin>>n2;
    int a[n1];
    int b[n2];
    cout<<"Enter Array 1 elements: ";
    for(int i=0; i<n1; i++) {
        cin>>a[i];
    }
    cout<<"Enter Array 2 elements: ";
    for(int i=0; i<n2; i++) {
        cin>>b[i];
    }
    vector<int> ans = IntersectionArray(a, b, n1, n2);
    cout<<"Intersection Array: ";
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}