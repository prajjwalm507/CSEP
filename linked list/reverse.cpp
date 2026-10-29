#include<iostream>
using namespace std;

struct node{
    int data ;
    node* next ;
};
int main (){
    node* head = new node () ;
    node* first = new node ();
    node* second = new node ();
    node* third  = new node ();
    node* forth = new node ();

    head->data = 10 ;
    first->data = 20 ;
    second->data = 30 ;
    third->data = 40 ;
    forth->data = 50 ;
    
    node* prev = NULL ;
    node* currnt = head ;
    node* next = NULL ;

    while(currnt!=NULL){
        next = currnt->next ;
        currnt->next = prev ;
        prev = currnt ;
        currnt = next ;

    }
    head = prev ;

        node* temp = head ;
        while(temp != NULL){
            cout<<"temp->data" << " -> " ;
            temp = temp->next ;
        }
      cout <<" null " ;

}