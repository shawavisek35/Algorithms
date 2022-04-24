#include<bits/stdc++.h>
using namespace std;

//Insert each node at the front

class Node {
    public:
    int val;
    Node *next;
    
    public:
    Node(int _val) {
        val = _val;
        next = NULL;
    }
};

class Stack {
    private:
    Node *list;
    
    public:
    Stack() {
        list = NULL;
    }
    
    void push(int x) {
        Node *newNode = new Node(x);
        if(list == NULL) {
            list = newNode;
        }
        else {
            newNode->next = list;
            list = newNode;
        }
        return;
    }
    
    void pop() {
        if(list == NULL) {
            cout << "Stack is empty\n";
        }
        else {
            Node *temp = list;
            list = list->next;
            delete temp;
        }
        return;
    }
    
    void display() {
        if(list == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node *temp = list;
        while(temp!=NULL) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    Stack *q = new Stack();
    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    q->push(5);
    q->push(6);
    q->display();
    q->pop();
    q->display();
    q->push(6);
    q->display();
    return 0;
}
