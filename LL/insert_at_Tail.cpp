#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this-> next = NULL;
    }

};




void insertAtTail(node* &tail, node* &head, int data){
    //step 1: creat a new node
    node* new_tail = new node(data);
    //step 2: check if tail was empty or not AND link new_tail with tail
    if(tail == NULL){
        //means first node ab add hone wali hai
        tail = new_tail;
        head = new_tail;
    }
    else{
        tail->next = new_tail;

    }

    //step 3 :upadate tail
    tail = new_tail;
}

void printLL(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }   
}

int main(){
    node* head = NULL;
    node* tail = NULL;



    //calling insert at tial of node
    insertAtTail(tail,head,20);
    insertAtTail(tail,head,30);
    insertAtTail(tail,head,50);
    insertAtTail(tail,head,90);

    printLL(head);



    return 0;
}