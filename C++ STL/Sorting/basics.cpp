#include <bits/stdc++.h>
using namespace std;



// Ascending Order

void SortVec() {
    vector<int> vec = {55, 3, 4, 81, 63, 1, 11, 77, 14, 44};
    for (auto it:vec) {
        cout<<it<<" ";
    }
    cout<<endl;
    sort(vec.begin(), vec.end());
    for (auto it:vec) {
        cout<<it<<" ";
    }
}
int main()
{
    SortVec();
    return 0;
}




//Descending Order

bool Comp (int a, int b) {
    return a>b;
}
int main()
{
    vector<int> vec = {55, 3, 4, 81, 63, 1, 11, 77, 14, 44};
    for (auto it:vec) {
        cout<<it<<" ";
    }
    cout<<endl;
    sort(vec.begin(), vec.end(), Comp);
    for (auto it:vec) {
        cout<<it<<" ";
    }
    return 0;
}