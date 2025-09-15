#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* back;
    Node* next;

    Node(int data1, Node* back1, Node* next1) {
        data = data1;
        next = next1;
        back = back1;
    }
};
Node* ConvertArrToDLL(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0], nullptr, nullptr);        // Creating a HEAD
    Node* prev = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i], prev, nullptr);
        prev->next = temp;
        prev = prev->next;
    }

    return head;
}
void printDLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    
    Node* head = ConvertArrToDLL(arr);
    
    printDLL(head);

    return 0;
}