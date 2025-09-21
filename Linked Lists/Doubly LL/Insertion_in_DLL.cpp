#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data; 
    Node* next;
    Node* back;

    Node (int data1, Node* back1, Node* next1) {
        data = data1;
        back = back1;
        next = next1;
    }
};

Node* convertArrToLL(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0], nullptr, nullptr);            // Creating a HEAD
    Node* prev = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i], prev, nullptr);
        prev->next = temp;
        prev = prev->next;
    }

    return head;
}

Node* InsertHead(Node* head, int val) {
    Node* temp = new Node(val, nullptr, head);
    
    return temp; 
}

Node* InsertTail(Node* head, int val) {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    Node* newElem = new Node(val, temp, nullptr);
    temp->next = newElem;

    return head;
}

Node* InsertAtPos(Node* head, int val, int pos) {
    int count = 1;
    Node* temp = head;

    while(count != (pos-1)) {
        temp = temp->next;
        count++;
    }

    Node* newElem = new Node(val, temp, temp->next);
    temp->next = newElem;

    return head;
}

Node* InsertBeforeVal(Node* head, int val, int key) {
    Node* temp = head;

    while(temp->data != key) {
        temp = temp->next;
    }
    
    Node* prev = temp->back;
    Node* newElem = new Node(val, prev, temp);
    prev->next = newElem;
    temp->back = newElem;
    
    return head;
}

void printDLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    
    Node* head = convertArrToLL(arr);

    int val;
    cout<<"Enter element to be inserted: ";
    cin>>val;

    // int key;
    // cout<<"Enter the element before which you want the new element to be inserted: ";
    // cin>>key;

    head = InsertHead(head, val);

    printDLL(head);
    
    return 0;
}