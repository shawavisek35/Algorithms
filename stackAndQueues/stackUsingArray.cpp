#include<bits/stdc++.h>
using namespace std;

class Stack {
    private:
    int top;
    int arr[100];
    
    //constructor
    public:
    Stack() {
        top = -1;
    }
    
    void push(int x) {
        top++;
        arr[top] = x;
    }
    
    int pop() {
        if(top == -1) return -1;
        int res = arr[top];
        top--;
        return res;
    }
    
    void display() {
        if(top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        for(int i=top;i>=0;i--) {
            cout << arr[i] << " - > ";
        }
        cout << "\n";
        return;
    }
};

int main() {
    Stack *st = new Stack();
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->display();
    st->pop();
    st->display();
    return 0;
}
