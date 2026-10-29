#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Store data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = nullptr;

    // Display linked list
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}