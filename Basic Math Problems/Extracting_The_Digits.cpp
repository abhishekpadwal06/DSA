#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    cout<<"Enter number: ";
    cin>>num;
    while (num>0) {
        n=num%10;
        cout<<n<<" ";
        num/=10;
    }
    return 0;
}