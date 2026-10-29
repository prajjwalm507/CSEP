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
    Node* fifth = new Node();

    // Store data
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    // Element to search
    int key = 30;

    // Linear search
    Node* temp = head;
    bool found = false;

    while (temp != nullptr) {
        if (temp->data == key) {
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (found) {
        cout << "Element " << key << " found";
    } else {
        cout << "Element " << key << " not found";
    }

    return 0;
}