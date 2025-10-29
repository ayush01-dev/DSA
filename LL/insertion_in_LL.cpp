#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(){
        this->data = -1;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,int data){
    //step1: create a node
    Node* newNode = new Node(data);

    //step2: attach newNode next with head 
    newNode->next = head;

    //step3: make newNode a head
    head = newNode;

}

void printll(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
}


int main(){
    Node* head = new Node(10);  // a head (ojbect) is created on node class  having data = 10;
    //basically head is a pointer stroing the address of new Node created in heap

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,60);
    insertAtHead(head,80);
    insertAtHead(head,90);
    printll(head);

    return 0;

}