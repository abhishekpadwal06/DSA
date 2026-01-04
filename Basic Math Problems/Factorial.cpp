#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fact = 1;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num <= 1) {
        cout<<"Factorial of "<<num<<" is "<<num;
    }
    for(int i=1; i<=num; i++) {
        fact *= i;
    }
    cout<<"Factorial: "<<fact;
    cout<<endl;
    return 0;
}