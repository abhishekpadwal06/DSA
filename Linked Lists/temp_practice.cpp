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
Node* TraverseLL(vector<int> arr, int n) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

bool SearchLL(Node* head, int key) {
    Node* y = head;
    Node* temp = y;
    while(temp != nullptr) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    int n = arr.size();
    
    Node* head = TraverseLL(arr, n);
    int key;
    
    cout<<"Enter element to be searched: ";
    cin>>key;

    bool ans = SearchLL(head, key);
    
    if(ans) {
        cout<<"Element is present in the LL";
    }
    else {
        cout<<"Element is NOT present in the LL";
    }
    
    cout<<endl;
    return 0;
}