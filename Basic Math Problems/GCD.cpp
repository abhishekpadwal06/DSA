#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, gcd=1, n;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    if(n1<n2)
        n=n1;
    else    
        n=n2;
    for(int i=n; i>=1; i--) {
        if(n1%i==0 && n2%i==0) {
            gcd=i;
            break;
        }
    }
    cout<<gcd;
    return 0;
}