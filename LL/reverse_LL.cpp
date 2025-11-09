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

Node* reverse(Node* &prev , Node* &curr){
    if(curr == NULL){
        //base case
        return prev;
    }

    //1 case solve karna hai then recursion will take care
    Node* forward =  curr -> next;
    curr ->next = prev;

    //recursive call
    reverse(curr,forward);
}

int main(){

    Node* first = new Node(12);
    Node* second = new Node(24);
    Node* third = new Node(36);
    Node* fourth = new Node(48);
    Node* fifth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;


    Node* head = first;
    Node* tail = fifth;


    printLL(head);



    Node* prev = NULL;
    Node* curr = head;


    head = reverse(prev,curr);
    cout<<endl;

    printLL(head);




    return 0;
}