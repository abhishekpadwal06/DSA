// Basics of Sets
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(9);
    s.insert(4);
    s.insert(44);
    s.insert(1);
    s.insert(8);
    s.insert(32);
    s.insert(8);
    s.insert(55);
    s.insert(16);
    auto it = s.find(44);
    cout<<&it<<endl;
    for(auto it:s)  {
        cout<<it<<" ";
    }
    s.erase(16);
    cout<<endl;
    for(auto it:s)  {
        cout<<it<<" ";
    }
    return 0;
}