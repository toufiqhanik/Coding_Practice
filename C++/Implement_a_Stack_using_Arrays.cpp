//Problem: Implement a stack data structure using arrays.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
using namespace std;


class Stack {

private:
    int* arr;
    int capacity;
    int top;


public:
    Stack (int size ){
        arr = new int [size];
        capacity = size;
        top = -1;
    }

    ~Stack(){
        delete [] arr;
    }

    void push (int x) {
    if  (top == capacity -1) {
        cout << "stack Overflow" << endl;
        return;
    }

    arr [++top]= x;
    }

    int pop() {
        if (top == -1 ){
            cout << "Stack Underflow" << endl;
            return -1;
        }

        return arr[top--];     

    }

    int peek () {
        if (top!= -1) {
            return arr [top];
        }

        return -1;
    }

    bool isEmpty() {
        return top == -1;
    }

};

int main () {
    Stack stack (5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(210);
    stack.push(330);

    cout << "Top element of this stack is: " << stack.peek() << endl;


    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    


    cout << "Top element of this stack is: " << stack.peek() << endl;

    if (stack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}