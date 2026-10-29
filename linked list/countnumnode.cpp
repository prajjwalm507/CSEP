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

    // Count nodes
    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    cout << "Number of nodes = " << count;

    return 0;
}