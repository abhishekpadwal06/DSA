#include <bits/stdc++.h>
using namespace std;
long fact=1, cnt=1;
void printFact(int num) {
    fact=fact*cnt;
    cnt++;
    if(cnt>num) {
        cout<<fact;
        return;
    }
    printFact(num);
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    printFact(num);
    return 0;
}