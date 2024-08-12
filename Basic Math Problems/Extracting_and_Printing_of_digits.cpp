// WAP in C++ to extract the digits from the number entered by user and print them in reversed order.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, rev;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0) {
        rev=num%10;
        num=num/10;
        cout<<rev<<" ";
    }
    return 0;
}