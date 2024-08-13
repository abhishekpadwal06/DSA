// Simple C++ program with Base Condition
#include <bits/stdc++.h>
using namespace std;
int num=1;
void Explain_rec() {
    cout<<"Hello"<<endl;
    if (num==5) {
        return;
    }
    num++;
    Explain_rec();
}
int main()
{
    Explain_rec();
    return 0;
}