#include <iostream>
using namespace std;

class  Node{
    public:
    int data;
    Node* next;

    //constructor for inisilaztion
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//insterstion function in linked list
void insertAtNode(Node* &head, int data){
    //1) create a  new node
    Node* newNode = new Node (data);
    //2) link new node with head
    newNode->next = head;
    //3) make newNOde as a head
    head = newNode;


}


//print nodes of ll
void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}




int main(){ 
    Node* head = new Node(10);

    insertAtNode(head,40);
    insertAtNode(head,60);
    insertAtNode(head,90); 


    printLL(head);


    return 0;
}