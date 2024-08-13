#include <bits/stdc++.h>
using namespace std;
int cnt=1;
void print(int n) {
    cout<<cnt;
    cnt++;
    if(cnt>n) {
        return;
    }
    print(n);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
    return 0;
}