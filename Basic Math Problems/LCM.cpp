#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, lcm;
    cout<<"Enter two numbers: ";
    cin>>a>>b;  // a=5, b=10
    if(a>b){
        n=a;       // n=10
    }
    else{
        n=b;        
    }
    while(n!=0) {
        if(n%a==0 && n%b==0) {
            lcm=n;
            break;
        }
        n++;
    }
    cout<<"LCM is "<<lcm<<endl;
    return 0;
}