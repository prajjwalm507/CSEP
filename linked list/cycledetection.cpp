#include<iostream>
using namespace std ;
 
struct node {
    int data ;
   node* next ;
} ;
 int main (){
    node* head = new node() ;
    node* second = new node();
    node* third = new node();
    node* forth = new node();
    node* fifth = new node();
    node* sixth = new node();

    head->data = 10 ;
    second->data = 30;
    third->data = 40;
    forth->data = 50;
    fifth->data = 60;
    sixth->data = 70;

    head->next = second ;
    second->next = third ;
    third->next = forth ;
    forth->next = fifth ;
    fifth->next = second ;
    fifth->next = sixth ;
    sixth->next = NULL ;

    node* slow = head ;
    node* fast = head ;
    while( fast != nullptr && fast->next != nullptr ){
        slow = slow->next; 
        fast = fast->next->next; 
        if(slow == fast){
            cout<<"cycle detected ";     }
            else {
            cout<<"no cycle";
          }
    }
    return 0;
 }