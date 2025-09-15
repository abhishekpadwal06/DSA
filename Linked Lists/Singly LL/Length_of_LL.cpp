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
int LengthOfLL(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    vector<int> arr = {8, 3, 5, 1, 2, 4};
    Node* head = convertArrToLL(arr);
    cout<<LengthOfLL(head)<<endl;
    return 0;
}