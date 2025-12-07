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

    }

    void dequeue() {

    }

    void display() {
        
    }
}q;

int main() {
    int x, choice;

    while(true) {
        cout<<"\n---------Queue (Arrays)---------\n";
        cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. End\n";
        cout<<"\nEnter a choice (1-6): ";
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
}