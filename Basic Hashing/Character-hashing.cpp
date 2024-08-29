/*                                      Problem Statement

Find the frequency of the occurence of certain characters from the string given by the user
[Smallcase letters only]

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int hash[26]={0};
    for(int i=0; i<s.length(); i++) {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the number of letters you want to find the frequency of: ";
    cin>>q;
    while(q--) {
        char ch;
        cout<<"Enter the letter you want to find the frequency of: ";
        cin>>ch;
        cout<<"Occurence: "<<hash[ch-'a']<<endl;
    }
    return 0;
}