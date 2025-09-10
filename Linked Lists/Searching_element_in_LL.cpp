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

int SearchElement(Node* head, int key) {
    int search = 0;
    Node* temp = head;
    while(temp) {
        if(key == temp->data) {
            search = 1;
            break;
        }
        temp = temp->next;
    }
    return search;
}
int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    int key;
    cout<<"Key = ";
    cin>>key;
    Node* head = convertArrToLL(arr);
    cout<<SearchElement(head, key)<<endl;
    return 0;
}