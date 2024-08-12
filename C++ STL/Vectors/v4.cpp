//Accessing the elements of a vector using Iterator Method 



// v.end()          --> Using this the iterator will NOT point to the last element of the vector, Rather it will point to an element outside the vector and may return a garbage value (OR zero)

#include <bits/stdc++.h>
using namespace std;
void vec () {
    vector <int> v = {55,44,16,14,63,4,81};
    vector <int>::iterator it = v.end();  //  Iterator will point to element outside the vector
    cout<<*(it);
}
int main ()
{
    vec();
    return 0;
}