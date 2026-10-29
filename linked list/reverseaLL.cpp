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
    Node* fourth = new Node();

    // Store data
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    // Reverse linked list
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    // Display reversed linked list
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}