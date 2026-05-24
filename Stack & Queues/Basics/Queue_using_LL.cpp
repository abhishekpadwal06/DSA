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

class Queue {
    Node* start;
    Node* end;
    
    public:
    Queue() {
        start = end = nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if(end == nullptr) {                        // If queue is empty!
            start = end = newNode;
            return;
        }
        end->next = newNode;
        end = newNode;
    }

    void dequeue() {
        if(start == nullptr) {                      // If queue is empty!
            cout<<"Queue is empty!"<<endl;
            return;
        }   
        Node* temp = start;
        start = start->next;
        free(temp);
    }

    void display() {
        if(start == nullptr) {
            cout<<"Queue is empty!"<<endl;
            return;
        }
        Node* temp = start;
        while(temp != nullptr) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}q;

int main() {
    int choice, x;
    while(true) {
        cout<<"\n---------Queue (Linked List)---------\n";
        cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. End\n";
        cout<<"\nEnter a choice (1-4): ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"Enter element to push: ";
                cin>>x;
                q.enqueue(x);
                break;
            case 2: 
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                return 0;
                
            default: 
                cout<<"Invalid choice";
        }
    }
    return 0;
}
