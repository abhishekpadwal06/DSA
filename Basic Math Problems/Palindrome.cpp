#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ld, rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    int x=num;
    while(num>0) { 
        ld=num%10;
        rev=(rev*10)+ld;
        num/=10;
    }
    if(rev==x) {
        cout<<"Number is Palindrome";
    }
    else 
        cout<<"Number is not Palindrome";
    return 0;
}