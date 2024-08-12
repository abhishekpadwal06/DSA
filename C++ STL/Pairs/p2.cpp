//Inserting 2 elements in a nested pair
#include <bits/stdc++.h>
using namespace std;
void NestPair() {
    pair<int, pair<int, int>> p = {1, {3,4}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}
int main () {
    NestPair();
    return 0;
}