#include <iostream>
using namespace std;
struct Node {
    int data ;
    Node* next ;
};
int main(){
    Node* head=nullptr;
    Node* temp=nullptr;
    Node* newNode = nullptr;

    int n, value;
    cout<< "enter number of nodes : ";
    cin >> n;
    for (int i=0;i<n; i++) {
        cout << "enter value:" ;
        cin >> value ;
        newNode = new Node();
        newNode->data = value ;
        newNode->next = nullptr ;
        if(head == nullptr){
            head = newNode ;
            temp = newNode ;
        }
        else{
            temp->next = newNode ;
            temp = newNode;
        }
    }

    cout <<"linked list:";
    temp = head ;
    while (temp!= nullptr){
        cout << temp->data <<" -> " ;
        temp = temp->next;
    }
    cout << "NULL";
    return 0 ;

}