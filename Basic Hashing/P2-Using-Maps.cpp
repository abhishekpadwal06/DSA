// Count the frequency of array elements using Hashing method
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    map<char,int> mpp;
    for(int i=0; i<s.size(); i++) { 
        mpp[s[i]]++;
    }
    int q;
    cout<<"Enter the number of characters whose frequency you need to find: ";
    cin>>q;
    while(q!=0) {
        char ch;
        cout<<"\nEnter the character you want to find the frequency of: ";
        cin>>ch;
        cout<<"The frequency of the character is: ";
        cout<<mpp[ch]<<" ";
        q--;
    }
    return 0;
} 