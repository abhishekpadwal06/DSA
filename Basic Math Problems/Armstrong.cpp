#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ld, sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    int x=num;
    while(num>0) {
        ld=num%10;
        num=num/10;
        sum=sum+(ld*ld*ld);
    }
    if(sum==x) {
        cout<<"Number is Armstrong";
    }
    else
        cout<<"Number is not Armstrong";
    return 0;
}