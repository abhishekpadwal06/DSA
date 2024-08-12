#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, cnt, lastDigit, op;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0) {
            lastDigit = num%10;
            if (lastDigit==0) {
                lastDigit = 1;
                cnt--;
            }
            op = num%lastDigit;
            
            if (op==0) {
                cnt++;
            }
            num=num/10;
        }   
        cout<<cnt;
}