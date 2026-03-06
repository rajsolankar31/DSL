#include <iostream>
using namespace std;

#define SIZE 5

int stackArr[SIZE];
int top = -1;

void push() {
    int value;

    if (top == SIZE - 1) {
        cout << "Stack Overflow! Cannot insert.\n";
        return;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    top++;
    stackArr[top] = value;

    cout << "Inserted successfully.\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to delete.\n";
        return;
    }

    cout << "Deleted element: " << stackArr[top] << endl;
    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty. Nothing to peek.\n";
        return;
    }

    cout << "Top element is: " << stackArr[top] << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
