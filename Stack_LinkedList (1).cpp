#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* top = NULL;

// Push operation
void push(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    cout << value << " pushed into stack\n";
}

// Pop operation
void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = top;
    cout << top->data << " popped from stack\n";
    top = top->next;
    delete temp;
}

// Peek operation
void peek() {
    if (top == NULL) {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "Top element is: " << top->data << endl;
}

// Display operation
void display() {
    if (top == NULL) {
        cout << "Stack is Empty\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements are: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n===== Stack using Linked List (C++) =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 5);

    return 0;
}