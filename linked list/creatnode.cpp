#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    
    Node* newNode = new Node();
    newNode->data = 10;
    newNode->data =20 ;
    newNode->next= nullptr;
    cout << "Node data: " << newNode->data << endl;


    return 0;
}

    
    