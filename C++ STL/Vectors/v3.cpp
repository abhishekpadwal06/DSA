//Accessing the elements of a vector using Iterator Method (Another method is the array method which is used in v1.cpp & v2.cpp)



// v.begin()
#include <bits/stdc++.h>
using namespace std;
void vec () {
    vector <int> v = {55,44,16,14,63,4,81};
    vector <int>::iterator it = v.begin();  //  Iterator will point to address of '55'
    it++;   //  Now iterator will point to address of '44'
    cout<<*(it);
}
int main ()
{
    vec();
    return 0;
}