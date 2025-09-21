#include <bits/stdc++.h>
using namespace std;

#define MAX 10

class Stack {
    int st[MAX];
    int top;
    public: 
        Stack() {
            int top = -1;
        }
        void push(int x) {
            if (top < MAX - 1) {
                st[++top] = x;
            } else {
                cout << "Stack Overflow!\n";
            }
        }
    
        int topelem() {
            if (top == -1) {
                cout << "Stack is empty!\n";
                return -1;
            }
            return st[top];
        }
    
        void pop() {
            if (top == -1) {
                cout << "Stack is empty!\n";
            } else {
                top--;
            }
        }
    
        int size() {
            return (top + 1);
        }
    
        void display() {
            if (top == -1) {
                cout << "Stack is empty!\n";
                return;
            }
            for (int i = 0; i <= top; i++) {
                cout << st[i] << " ";
            }
            cout << "\n";
        }
}s;

int main() {
    char choice;
    int n;

    do {
        cout << "\n1. Push \n2. Pop \n3. Top \n4. Size \n5. Display \n6. Exit\n";
        cout << "Enter which operation you want to do: ";
        cin >> n;

        switch (n) {
            case 1: {
                int x;
                cout << "Enter element to be pushed: ";
                cin >> x;
                s.push(x);
                break;
            }
            case 2:
                s.pop();
                break;
            case 3:
                cout << "Top element: " << s.topelem() << "\n";
                break;
            case 4:
                cout << "Size of stack: " << s.size() << "\n";
                break;
            case 5:
                cout << "Stack elements: ";
                s.display();
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to continue?: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
