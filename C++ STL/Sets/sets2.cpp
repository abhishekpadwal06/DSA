// Lowerbound
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, n, num;
    set <int> s;
    cout<<"Enter the size of the set: ";
    cin>>n;
    cout<<"Enter the elements of the set: ";
    for(int i=1; i<=n; i++) {
        int p;
        cin>>p;
        s.insert(p);
    }
    cout<<"Enter the element to be searched: ";
    cin>>num; 
    auto it = s.lower_bound(num);
    cout<<"Your element was found at location: "<<&it<<endl;
    return 0;
}

// Upperbound
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}