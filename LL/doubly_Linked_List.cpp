#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    //default constructor
    Node(){
        this->data = -1;
        this->next = NULL;
        this->prev = NULL;
    }


    //parameterized constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }


};

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAthead(int data, Node* &head, Node* &tail){
    if(head == NULL){
        //empty case
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        
    }

    else{
        //non empty case
        
        //step1:create a new node
        Node* newNode =  new Node(data);
        //step2: link newNode to head
        newNode->next = head;
        //step3: link head prev to temp
        head->prev = newNode;
        //step4: update head
        head = newNode;
    }
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);


    first->next = second;
    second->prev = first; 

 
    second->next = third;
    third->prev = second;

    printLL(first);

    

    return 0;
}
