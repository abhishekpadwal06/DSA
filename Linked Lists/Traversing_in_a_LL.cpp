#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data; 
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* TraverseInLL(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0]);      // DO NOT TAMPER THE HEAD! ALWAYS REMEMBER !!!
    Node* mover = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    Node* head = TraverseInLL(arr);
    Node* temp = head;
    while(temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}