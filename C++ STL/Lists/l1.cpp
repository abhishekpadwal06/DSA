#include <bits/stdc++.h>
using namespace std;
void lis() {
    list <int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.emplace_front(3);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.push_front(6);
    for (auto it:ls) {
        cout<<it<<" ";
    }
    ls.pop_front();
    ls.pop_back();
    cout<<endl;
    for (auto it:ls) {
        cout<<it<<" ";
    }
}
int main()
{
    lis();
    return 0;
}