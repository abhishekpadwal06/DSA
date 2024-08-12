/* 
Problem Statement: Given an integer N return the reverse of the given number.
Note: If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ld, rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0) {
        ld=num%10;
        num/=10;
        rev=(rev*10)+ld;
    }
    cout<<rev;
    return 0;
}