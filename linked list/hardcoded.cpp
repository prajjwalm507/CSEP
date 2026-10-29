#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Hardcoded values
    int values[] = {10, 20, 30, 40, 50};
    int n = 5;

    Node* head = nullptr;
    Node* temp = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();

        newNode->data = values[i];
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display linked list
    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}