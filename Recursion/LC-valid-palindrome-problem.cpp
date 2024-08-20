/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

#include <bits/stdc++.h>
using namespace std;
bool func(int i, string s) { 
    string result;
    for(char ch : s) {
            char lowerch = tolower(ch);     // Converts each character to lowercase 
        if(isalnum(lowerch)) {
            result += lowerch;          // Checks if the character is alphanumeric
        }
    }
    s = result;
    if(i>=s.size()/2) {
        return true;
    }
    if(s[i]!=s[s.size()-i-1]) {
        return false;
    }
    return func(i+1, s);
}
int main()
{
    string s;
    getline(cin, s);
    cout<<func(0, s);
    return 0;
}