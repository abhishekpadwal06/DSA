#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number of rows you want: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            cout<<"  ";
        }
        for(int k=0; k<(2*n-(2*i-1)); k++) {
            cout<<"* ";
        }
        for(int j=0; j<i; j++) {
            cout<<"  ";
        }
    cout<<endl;
    }
    return 0;
}