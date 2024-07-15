#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX = 5;
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = rear = -1;
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow because maximum elements in queue must be: " << MAX << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " enqueued to queue\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        int x = arr[front++];
        if (front > rear) front = rear = -1; 
        return x;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[rear];
    }

    void traverse() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue elements are:\n";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Rear\n";
        cout << "5. Traverse\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                value = q.dequeue();
                if (value != -1) {
                    cout << value << " dequeued from queue\n";
                }
                break;
            case 3:
                value = q.getFront();
                if (value != -1) {
                    cout << "Front element is " << value << endl;
                }
                break;
            case 4:
                value = q.getRear();
                if (value != -1) {
                    cout << "Rear element is " << value << endl;
                }
                break;
            case 5:
                q.traverse();
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice, please try again\n";
        }
    }

    return 0;
}
