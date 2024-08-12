#include <bits/stdc++.h>
using namespace std;
void MPP() {
    map <int,string> F1;
    int num, search;
    string value;
    cout<<"Enter number of Drivers: ";
    cin>>num;
    cout<<"Enter their name: ";
    for (int i=0; i<=num; i++) {
        getline(cin, value);
        F1[i]=value;
    }
    cout<<"Pick any number from 1 to 5: ";
    cin>>search;
    cout<<F1[search];
}

int main()
{
    MPP();
    return 0;
}