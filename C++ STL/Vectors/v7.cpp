// Inserting an element in a vector
#include <bits/stdc++.h>
using namespace std;
void vec() {
    vector<int>v={3,4,5,11,14,16,55};
    v.insert(v.begin()+6, 44);
// If we want to add anything twice
//Syntax - 
//  v.insert(v.begin()+6, 2, 44);
    for(auto it : v)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vec();
    return 0;
}