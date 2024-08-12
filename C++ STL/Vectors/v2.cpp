// //Diff style of declaring a vector in which all the instances are the same
#include <bits/stdc++.h>
using namespace std;
void NewVec () {
    vector<int> v(5, 100);
    cout<<v[4];
}
int main ()
{
    NewVec();
    return 0;
}

//A vector where the size is already declared which contains either zeroes or any garbage values!
#include <bits/stdc++.h>
using namespace std;
void vec() {
    vector<int> v(5);
    cout<<v[4];
}
int main ()
{
    vec();
    return 0;
}

//Copying one vector into another
#include <bits/stdc++.h>
using namespace std;
void vect() {
    vector<int> v={1,2,3,4,5};
    vector<int> v1(v);
}
int main ()
{
    vect();
    return 0;
}