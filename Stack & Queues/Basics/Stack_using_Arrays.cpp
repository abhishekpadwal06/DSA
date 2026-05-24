#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack {
    int st[MAX];
    int topElem;
    public:
    Stack() {
        topElem = -1;
    }

    void push(int x) {
        if(topElem >= MAX-1) {
            cout<<"Stack Overflow!"<<endl;
        }
        else {
            st[++topElem] = x;
        }
    }

    void pop() {
        if(topElem < 0) {
            cout<<"Stack Underflow!"<<endl;
        }
        else{
            topElem--;
            cout<<"Element popped Successfully!"<<endl;
        }
    }

    void top() {
        if(topElem == -1) {
            cout<<"Stack is empty!"<<endl;
        }
        else {
            cout<<st[topElem];
        }
    }

    void size() {
        if(topElem < -1) {
            cout<<"Stack is empty!"<<endl;
        }
        cout<<"Stack size: "<<(topElem+1);
    }

    void display() {
        if(topElem < -1) {
            cout<<"Stack is empty!"<<endl;
        }
        for(int i=0; i<=topElem; i++) {
            cout<<st[i]<<" ";
        }
    }
}s;

int main() {
    int x, choice;

    while(true) {
        cout<<"\n---------STACK---------\n";
        cout<<"1. Push\n2. Pop\n3. Top\n4. Size\n5. Display\n6. Exit";
        cout<<"\nEnter a choice (1-6): ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"Enter element to push: ";
                cin>>x;
                s.push(x);
                break;
            case 2: 
                s.pop();
                break;
            case 3: 
                s.top();
                break;
            case 4:
                s.size();
                break;
            case 5:
                s.display();
                break;
            case 6:
                cout<<"Exiting..."<<endl;
                return 0;
                
            default: 
                cout<<"Invalid choice";
        }
    }
}