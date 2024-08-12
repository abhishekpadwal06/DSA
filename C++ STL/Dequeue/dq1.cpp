#include <bits/stdc++.h>
using namespace std;
void dq() {
    deque <int> q;
    q.push_back(1);
    q.push_back(2);
    q.emplace_front(3);
    q.emplace_back(4);
    q.push_front(5);
    q.push_front(6);
    for (auto it:q) {
        cout<<it<<" ";
    }
    q.pop_front();
    q.pop_back();
    cout<<endl;
    for (auto it:q) {
        cout<<it<<" ";
    }
}
int main()
{
    dq();
    return 0;
}