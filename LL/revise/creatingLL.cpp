#include <iostream>
using namespace std;

class node{
    public:
    node* next; //next is pointer of node data type
    int data ;

    node(){
        this->data = -1;
        this->next = NULL;
    }

    node(int data){
        this->data = data;
        this->next = NULL;
    }



};


//traversal in ll

void printLL(node* head){
    node* temp = head; //this is the temp pointer node staring from head
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);


    //linking the linked list
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;




    //now calling print fuction
    printLL(first);


    return 0;
}