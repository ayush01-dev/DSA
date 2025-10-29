#include <iostream>
using namespace std;


class node {
    public:
    int data;
    node* next;


    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//print functio for linked list
void printLL(node* &head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);


    //linking nodes

    first->next = second;
    second->next = third;

    //calling print function 
    printLL(first);


    return 0;
}