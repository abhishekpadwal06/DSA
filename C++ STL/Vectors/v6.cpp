//Deleting an element from the vector
// Here we are deleting elements 2 and 3. Remember it uses [ , ) approach!

#include <bits/stdc++.h>
using namespace std;
void vec() {
    vector<int>v={1,2,3,4,5};
    v.erase(v.begin()+1, v.begin()+3);    // OR v.erase(v.begin()+1, v.end()-2);
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
}
int main()
{
    vec();
    return 0;
}