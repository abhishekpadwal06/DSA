#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* back;
    Node* next;

    Node(int data1, Node* back1, Node* next1) {
        data = data1;
        back = back1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        back = nullptr;
        next = nullptr;
    }
};
Node* convertArrToLL(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<n; i++) {
        Node* newNode = new Node(arr[i], temp, nullptr);
        temp->next = newNode;
        temp = temp->next;
    }    
    return head;
}
Node* reverseDLL(Node* head) {
    Node* curr = head;
    Node* prev = nullptr;

    return head;
}
void displayLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    Node* head = convertArrToLL(arr);
    head = reverseDLL(head);
    displayLL(head);
    return 0;
}