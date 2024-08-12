//Unordered Sets - 
    //  These are ysed when we need a collection of unique elements but not in sorted order
    //  Lowerbound and Upperbound functions do not work in unordered sets
#include <bits/stdc++.h>
using namespace std;
void us1 () {
    unordered_set<int>us;
    us.insert(5);
    us.insert(8);
    us.insert(4);
    us.insert(7);
    us.insert(9);
    us.insert(1);
    us.insert(3);
    us.insert(3);
    us.insert(2);
    us.insert(6);
    for (auto a:us) {
        cout<<a<<" ";
    }
}
int main()
{
    us1();
    return 0;
}