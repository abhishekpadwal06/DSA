#include<bits/stdc++.h>
using namespace std;
#define MAX 5
class Queue {
    int Q[MAX];
    int start, end, currSize;

    public:
    Queue() {
        start = -1;
        end = -1;
        currSize = 0;
    }

    void enqueue(int x) {
        if(currSize == MAX) {
            cout<<"Queue is full!"<<endl;
        }
        else if(end == -1) {
            start = 0;
            end = 0;
        }
        else {
            end = (end + 1) % MAX;
        }
        Q[end] = x;
        currSize++;
    }

    void dequeue() {
        if(start == -1) {
            cout<<"Queue is empty!"<<endl;
            return;
        }
        int popped = Q[start];              // saving the element to be popped
        if(currSize == 1) {
            start = -1;
            end = -1;
        }
        else {
            // Circular Queue implementation
            start = (start + 1) % MAX;
        }
        currSize--;
    }

    void display() {
        if(currSize == 0) {
            cout<<"Queue is empty!"<<endl;
            return;
        }
        
        cout<<"Circular Queue elements: ";

        int i = start;
        while(true) {
            cout<<Q[i]<<" ";
            if(i==end) {
                break;
            }
            i = (i + 1) % MAX;
        }
        cout<<endl;
    }
}q;

int main() {
    int choice, x;
    while(true) {
        cout<<"\n---------- Queue ----------\n";
        cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout<<"Enter a choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter an element to enqueue: ";
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
                cout<<"Invalid choice!";
        }
    }
    return 0;
}