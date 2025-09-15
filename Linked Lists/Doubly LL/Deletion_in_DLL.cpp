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

Node* DeleteHead(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    free(prev);

    return head;
}

Node* DeleteTail(Node* head) {   
    Node* temp = head;
    
    while(temp->next != NULL) {
        temp = temp->next;
    }
    
    Node* prev = temp->back;
    temp->back = nullptr;
    prev->next = nullptr;
    
    free(temp);

    return head;
}

Node* DeleteAtPos(Node* head, int pos) {
    Node* temp = head;
    int count = 1;
    while(count != pos) {
        temp = temp->next;
        count++;
    }
    Node* prev = temp->back;
    prev->next = temp->next;
    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);

    return head;
}

Node* DeleteValue(Node* head, int val) {
    Node* temp = head;
    while (temp->data != val) {
        temp = temp->next;
    }
    
    Node* prev = temp->back;
    prev->next = temp->next;
    temp->back = nullptr;
    temp->next = nullptr;

    free(temp);

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
    
    int val; 
    cout<<"Enter value of Deletion: ";
    cin>>val;

    Node* head = ConvertArrToDLL(arr);
    head = DeleteValue(head, val);
    
    printDLL(head);

    return 0;
}