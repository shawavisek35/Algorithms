#include<bits/stdc++.h>
using namespace std;

class Queue {
    private:
    int front, rear;
    int arr[100];
    
    //constructor
    public:
    Queue() {
        front = -1;
        rear = -1;
    }
    
    void push(int x) {
        if(rear == -1) {
            front++;
            rear++;
        }
        else {
            rear++;   
        }
        arr[rear] = x;
    }
    
    int pop() {
        if(front == rear) return -1;
        int res = arr[front];
        front++;
        return res;
    }
    
    void display() {
        if(front==rear) {
            cout << "Queue is empty.\n";
            return;
        }
        for(int i=front;i<=rear;i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
};

int main() {
    Queue *q = new Queue();
    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    q->display();
    q->pop();
    q->display();
    return 0;
}
