#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    //default constructor
    Node(){
        this->data = -1;
        this->next = NULL;
    }

    //parameterized constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


//reverse a linked list using loop 
Node* reverseUsingLoop (Node* head){
     Node* prev = NULL;
     Node* curr = head;

     while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = temp;
    }
    return prev;
}

//below recursive code it taken from above loop 
Node* reverseUsingRecursion(Node* prev, Node* curr){
    //base case
    if(curr == NULL)
        return prev;

    // one case
    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;


    //recursive call
    reverseUsingRecursion(prev,curr);
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;


    Node* head = first;
    Node* tail = fifth;


    printLL(head);



    cout<<endl;
    head = reverseUsingLoop(head);

    printLL(head);




    Node* prev = NULL;
    Node* curr = head;
    cout<<endl;
    head = reverseUsingRecursion(prev,curr);

    printLL(head);




    




    return 0;
}