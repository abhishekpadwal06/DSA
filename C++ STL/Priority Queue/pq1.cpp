// By default Priority_Queue is to maximum heap
#include <bits/stdc++.h>
using namespace std;
int main()
{
//    priority_queue<int> pq;  
    priority_queue<int, vector<int>, less<int>> pq;
    pq.push(2);
    pq.push(7);
    pq.push(1);
    cout<<pq.top();
    return 0;
}

// Minimum heap
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(44);
    pq.push(55);
    pq.push(77);
    pq.push(3);
    pq.push(81);
    pq.push(4);
    pq.push(16);
    pq.push(55);
    cout<<pq.top();
    return 0;
}