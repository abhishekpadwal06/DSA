#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
    Node* top;

    public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if(top == nullptr) {
            cout<<"Stack is empty!\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        if(top == nullptr) {
            cout<<"Stack is empty!\n";
            return;
        }
        Node* temp = top;
        while(temp != nullptr) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main() {
    Stack s;
    int choice, x;
    while(true) {
        cout<<"\n---------- STACK (LINKED LIST) ----------\n";
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout<<"Enter a choice: ";
        cin>>choice;
        
        switch(choice) {
            case 1:
                cout<<"Enter an element: ";
                cin>>x;
                s.push(x);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!\n";
        }
    }
    return 0;
}