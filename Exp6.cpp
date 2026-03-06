#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int value;

    if (rear == SIZE - 1) {
        cout << "Queue Overflow! Cannot insert.\n";
        return;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    if (front == -1) {
        front = 0;
    }

    rear++;
    queueArr[rear] = value;

    cout << "Inserted successfully.\n";
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Nothing to delete.\n";
        return;
    }

    cout << "Deleted element: " << queueArr[front] << endl;
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty. Nothing to peek.\n";
        return;
    }

    cout << "Front element is: " << queueArr[front] << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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
