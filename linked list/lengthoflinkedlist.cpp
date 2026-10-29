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

    // Find length
    int length = 0;
    Node* temp = head;

    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }

    cout << "Length of linked list = " << length;

    return 0;
}