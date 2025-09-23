#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };
    
    Node* top;

public:
    // Constructor
    Stack() {
        top = nullptr;
    }
    
    // Destructor
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
    
    // Push element onto stack
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack" << endl;
    }
    
    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop." << endl;
            return;
        }
        
        Node* temp = top;
        cout << top->data << " popped from stack" << endl;
        top = top->next;
        delete temp;
    }
    
    // Get top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
    
    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        
        cout << "Stack elements: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    
    cout << "=== Basic Stack Operations ===" << endl;
    
    // Test empty stack
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    s.pop(); // Try to pop from empty stack
    
    // Push some elements
    s.push(10);
    s.push(20);
    s.push(30);
    
    // Display stack
    s.display();
    
    // Peek at top element
    cout << "Top element: " << s.peek() << endl;
    
    // Pop some elements
    s.pop();
    s.display();
    
    // Check if empty
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}