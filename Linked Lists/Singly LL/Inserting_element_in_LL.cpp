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
Node* convertArrToLL(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }   
    return head;
}
Node* insertElementAtHead(int x, Node* head) {
    if(head == NULL) {
        return new Node(x);
    }
    Node* temp = new Node(x);
    temp->next = head;
    head = temp;
    return head;
}
Node* insertElementAtLast(int x, Node* head) {
    if(head == NULL) {
        return new Node(x);
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* newElem = new Node(x);
    temp->next = newElem;
    
    return head;
}
Node* insertElementAtPos(Node* head, int el, int pos) {
    int count = 1;
    Node* temp = head;
    if(pos==1) {
        Node* temp = new Node(el);
        temp->next = head;
        head = temp;
    }
    else {
        while(count != (pos-1)) {
            temp = temp->next;
            count++;
        }
        Node* newElem = new Node(el);
        newElem->next = temp->next;
        temp->next = newElem;
    }
    return head;
}
Node* insertElementBeforeVal(int el, int val, Node* head) {
    if(head == NULL) {
        return NULL;
    }
    if(head->data == val) {
        Node* temp = new Node(el);
        temp->next = head;
    }

    
    Node* temp = head;
    
    while(temp->next->data != val) {
        temp = temp->next;
    }
    
    Node* newElem = new Node(el);
    newElem->next = temp->next;
    temp->next = newElem;

    return head;
}   
void printLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    vector<int> arr = {3, 5, 1, 2, 4};

    Node* head = convertArrToLL(arr);

    int el;
    cout<<"Enter element to be inserted: ";
    cin>>el;

    int val;
    cout<<"Enter the value BEFORE the element to be inserted: ";
    cin>>val;

    head = insertElementBeforeVal(el, val, head);
    printLL(head);
    return 0;
}