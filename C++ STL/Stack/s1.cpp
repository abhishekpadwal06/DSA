// Stack basics
#include <bits/stdc++.h>
using namespace std;
void ExplainStack () {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.pop();    
    st.pop();    
    st.pop();    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
void printing(stack<int> st) {
    cout<<endl<<st.size()<<"\n";
    cout<<st.empty()<<"\n";
}
int main()
{
    stack<int> st;
    ExplainStack();
    printing(st);
    return 0;
}