#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create existing linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    // New node
    Node* newNode = new Node();
    newNode->data = 5;

    // Insert at beginning
    newNode->next = head;
    head = newNode;

    // Display linked list
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}