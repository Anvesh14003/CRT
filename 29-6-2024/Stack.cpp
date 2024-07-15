#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        } else {
            int x = arr[top];
            return x;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }

    void traverse() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return;
        } else {
            cout << "Stack elements are:\n";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Traverse\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                cout << s.pop() << " Popped from stack\n";
                break;
            case 3:
                cout << "Top element is " << s.peek() << endl;
                break;
            case 4:
                s.traverse();
                break;
            case 5:
                cout << "Exiting...\n";
                exit(0);
            default:
                cout << "Invalid choice, please try again\n";
        }
    }

    return 0;
}
