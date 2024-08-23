#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, gcd;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int x=a, y=b;
    while(a>0 && b>0) {
        if(a>b) {
            a=a%b;
        }
        if(b>a) {
            b=b%a;
        }
    }
    if(a==0) {
        gcd=b;
    }
    else {
        gcd=a;
    }
    int lcm = (x*y)/gcd;
    cout<<"GCD is "<<gcd<<" LCM is "<<lcm;
    return 0;
}