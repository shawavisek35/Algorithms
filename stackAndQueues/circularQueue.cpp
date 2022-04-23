#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
    private:
    int front, rear;
    int arr[100];
    int maxSize;
    
    //constructor
    public:
    CircularQueue(int size) {
        front = -1;
        rear = -1;
        maxSize = size;
    }
    
    void push(int x) {
        if((rear+1)%maxSize == front) {
            cout << "Queue is already full.\n";
            return; 
        }
        if(front == -1) {
            front++;
        }
        rear = (rear + 1)%maxSize;
        arr[rear] = x;
    }
    
    int pop() {
        if(front == rear) {
            cout << "Queue is empty.\n";
            return -1;
        }
        int res = arr[front];
        front = (front + 1)%maxSize;
        return res;
    }
    
    void display() {
        if(front==rear) {
            cout << "Queue is empty.\n";
            return;
        }
        int  i = front;
        while(i!=rear) {
            cout << arr[i] << " ";
            i = (i+1)%maxSize;
        }
        cout << arr[i];
        cout << "\n";
        return;
    }
};

int main() {
    CircularQueue *q = new CircularQueue(5);
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
