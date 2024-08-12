#include <bits/stdc++.h>
using namespace std;
int main()
{long long ld=0, rev=0;
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    while(x != 0) 
    {
        ld = x % 10;
        x = x / 10;
        rev = (rev*10) + ld;
        if(rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
    }
    return rev;
}