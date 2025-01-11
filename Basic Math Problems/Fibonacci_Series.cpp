// Fibonacci Series

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, f1 = 0, f2 = 1;
    cout<<"\nEnter a number: ";
    cin>>n;
    if (n < 1) {
        return 0;
    }
    cout << f1 << " ";
    for (int i = 1; i < n; i++) {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    cout<<endl;
    return 0;
}