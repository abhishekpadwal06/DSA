// Other functions in Vectors
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1(5);
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.pop_back();
    cout<<v.size()<<endl;
    // v1.swap(v);
    // v1.clear();
    cout<<v1.empty()<<endl; //Though there's nothing in v1 vector but still garbage values (OR Zeroes) are there. And since we are not clearing vector v1 it shows that the vector is not empty!
    cout<<v.empty()<<endl;
}