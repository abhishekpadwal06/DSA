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
};
Node* convertArrtoLL(vector<int> arr, int n) {
    Node* head = new Node(arr[0], nullptr, nullptr);         // Creating a HEAD
    Node* prev = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i], prev, nullptr);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}
Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, nullptr, head);
    
    return temp;
}
Node* insertTail(Node* head, int val) {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = new Node(val, temp, nullptr);
    temp->next = newNode;

    return head;
}
Node* insertPos(Node* head, int val, int pos) {
    Node* temp = head;
    int count = 1;
    while(count != pos) {
        temp = temp->next;
        count++;
    }
    Node* newNode = new Node(val, temp->back, temp);
    temp->back->next = newNode;

    return head;
}
Node* deleteHead(Node* head) {
    Node* temp = head->next;
    delete head;
    temp->back = nullptr;

    return temp;
}
Node* deleteTail(Node* head) {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->back->next = nullptr;
    delete temp;

    return head;
}
Node* deletePos(Node* head, int pos) {
    int count = 1;
    Node* temp = head;
    while(count != pos) {
        temp = temp->next;
        count++;
    }
    Node* nextNode = temp->next;
    temp->back->next = nextNode;
    nextNode->back = temp->back;
    delete temp;

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
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    int n = arr.size();
    Node* head = convertArrtoLL(arr, n);

    // int val;
    // cout<<"Enter element: ";
    // cin>>val;

    int pos;
    cout<<"Enter position: ";
    cin>>pos;

    head = deletePos(head, pos);

    displayLL(head);

    return 0;
}