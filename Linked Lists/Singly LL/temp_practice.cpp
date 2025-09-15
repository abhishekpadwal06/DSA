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
Node* deleteTail(Node* head) {
    Node* temp = head;
    if(temp->next == NULL)  return NULL;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next->next);
    temp->next = nullptr;
    return head;
}
void printLL(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    Node* head = convertArrToLL(arr);
    head = deleteTail(head);
    printLL(head);
    return 0;
}