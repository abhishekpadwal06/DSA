#include <bits/stdc++.h>
using namespace std;
int cnt=1;
void printSum(int num, int ans) {
    ans=ans+(cnt*cnt*cnt);
    cnt++;
    if(cnt>num) {
        cout<<ans;
        return;
    }
    printSum(num, ans);
}
int main()
{
    int num, ans=0;
    cout<<"Enter a number: ";
    cin>>num;
    printSum(num, ans);
    return 0;
}