#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(NULL) {}

    void append(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next!= NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void add(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int data) {
        Node* temp = head;
        Node* prev = NULL;

        while (temp!= NULL && temp->data!= data) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Node not found" << endl;
            return;
        }

        if (prev == NULL) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
    }

    void insert(int data, int pos) {
        Node* newNode = new Node();
        newNode->data = data;

        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        int count = 0;

        while (temp!= NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            cout << "Position out of range" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp!= NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    int choice;
    int data;
    int pos;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Append" << endl;
        cout << "2. Add" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Insert" << endl;
        cout << "5. Print" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to append: ";
                cin >> data;
                list.append(data);
                break;
            case 2:
                cout << "Enter data to add: ";
                cin >> data;
                list.add(data);
                break;
            case 3:
                cout << "Enter data to delete: ";
                cin >> data;
                list.deleteNode(data);
                break;
            case 4:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position to insert: ";
                cin >> pos;
                list.insert(data, pos);
                break;
            case 5:
                list.printList();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}