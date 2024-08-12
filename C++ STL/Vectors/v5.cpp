//Printing a vector
                                                            //Method 1
#include <bits/stdc++.h>
using namespace std;
void vec() {
    int n, s;
    vector<int> v;
    cout<<"Enter the number of elements you want in the vector: ";
    cin>>n;
    cout<<"Enter element: ";
    for (int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for (vector<int>::iterator it =v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
}
int main()
{
    vec();
    return 0;
}



                                                            //Method 2
#include <bits/stdc++.h>
using namespace std;
void vec() {
    int n, s;
    vector<int> v;
    cout<<"Enter the number of elements you want in the vector: ";
    cin>>n;
    cout<<"Enter element: ";
    for (int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for (auto it =v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
}
int main()
{
    vec();
    return 0;
}



                                                            //Method 3
#include <bits/stdc++.h>
using namespace std;
void vec() {
    int n, s;
    vector<int> v;
    cout<<"Enter the number of elements you want in the vector: ";
    cin>>n;
    cout<<"Enter element: ";
    for (int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for (auto it =v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
}
int main()
{
    vec();
    return 0;
}

                                                            //Method 4
#include <bits/stdc++.h>
using namespace std;
void vec() {
    int n, s;
    vector<int> v;
    cout<<"Enter the number of elements you want in the vector: ";
    cin>>n;
    cout<<"Enter element: ";
    for (int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for (auto it:v)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vec();
    return 0;
}