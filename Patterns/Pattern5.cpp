#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=n; j>i; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}