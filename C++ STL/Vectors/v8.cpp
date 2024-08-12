//Copying one vector into another
#include <bits/stdc++.h>
using namespace std;
void vec() {
    vector<int>v1(2,100); 
    vector<int>v2(2,50);
    v1.insert(v1.begin()+1, v2.begin(), v2.end());
    for(auto it:v1)
    {
        cout<<it<<" ";
    } 
}
int main()
{
    vec();
    return 0;
}