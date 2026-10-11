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

Node* reverseLL(Node* prev, Node* curr){
    //base case
    if(curr == NULL){
        return prev;
    }
    
        //ONE CASE
    //creating a temp pointer to track reaming nodes
    Node* temp = curr->next;
    //pointing curr with prev
    curr->next = prev;
    //updating prev and curr
    prev = curr;
    curr = temp;
    

    //recursive call
    reverseLL(prev,curr);


}



int main(){
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;


    Node* head = first;
    Node* tail = fifth;


    Node* prev = NULL;
    Node* curr = head;

    head = reverseLL(prev,curr);

    printLL(head);

    return 0;
}