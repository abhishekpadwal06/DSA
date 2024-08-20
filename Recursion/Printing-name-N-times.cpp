#include <bits/stdc++.h>
using namespace std;
int cnt=1;
void pN (string name, int num) {
    cout<<name<<endl;
    cnt++;
    if(cnt>num) {
        return;
    }
    pN(name, num);
}
int main()
{
    int num;
    string name;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"\nEnter a number: ";
    cin>>num;
    pN(name, num);
    return 0;
}