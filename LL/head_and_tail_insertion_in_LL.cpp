#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor 
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//insert at head function 
void insertAtHead(node* &head, node* &tail, int data){
    //check if LL is empty
        //LL is empty 
    if(head == NULL){
        node* new_node = new node(data);
        tail = new_node;
        head = new_node;
    }
        //LL is non empyt
    else{
        //step 1
        node* new_node = new node(data);
        //step 2
        new_node->next = head;
        //step 3;
        head = new_node;
        

    }
}

//insert at tail function
void insertAtTail(node* &head, node* &tail, int data){
    //check is LL is empty
        //if emply 
    if(tail == NULL){
        //means there is no node in ll
        //so we need to create a LL which will be both head and tail
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
    }   
        //no empty LL
    else{
        //step 1:
        node* new_node = new node(data);
        //step 2:
        tail->next = new_node;
        //step 3:
        tail = new_node;


    }       
}


//creating print for LL
void printLL(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    //creating NULL head and tail
    node* head = NULL;
    node* tail = NULL;


    //calling function of insert at head of node
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,45);
    //calling function of  insert at tail of node 
    insertAtTail(head,tail,45);
    insertAtTail(head,tail,99);
    insertAtTail(head,tail,79);


    //calling print function for ll 
    printLL(head);


    return 0;
}