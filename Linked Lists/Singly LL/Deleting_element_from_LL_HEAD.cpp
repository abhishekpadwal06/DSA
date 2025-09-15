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
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* removeHead(Node* head) {
    if(head == NULL)    return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
void printLL(Node* head) {
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
    head = removeHead(head);
    printLL(head);
    return 0;
}