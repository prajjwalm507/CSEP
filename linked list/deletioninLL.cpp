#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Delete from head
void deleteHead(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Delete from tail
void deleteTail(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // Only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

// Delete from given position
// Position starts from 1
void deletePosition(Node*& head, int position) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (position == 1) {
        deleteHead(head);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    // Create linked list
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};
    head->next->next->next->next = new Node{50, nullptr};

    cout << "Original list: ";
    display(head);

    // Delete from head
    deleteHead(head);
    cout << "After deleting head: ";
    display(head);

    // Delete from tail
    deleteTail(head);
    cout << "After deleting tail: ";
    display(head);

    // Delete from position 2
    deletePosition(head, 2);
    cout << "After deleting position 2: ";
    display(head);

    return 0;
}
