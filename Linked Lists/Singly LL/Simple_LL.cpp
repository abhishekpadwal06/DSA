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

int main() {
    vector<int> arr = {8, 3, 5, 1 , 2, 4};
    Node *y = new Node(arr[0]);
    cout<<y->data<<endl;
    return 0;
}
