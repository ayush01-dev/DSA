#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next ; // next is a pointer of node data type 

    Node(){
        this->data = -1;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL; 
    }

};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next; 
    }
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);  
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // cout<<"first ka data :"<<first->data<<endl;

    // cout<<"first ka next "<<first->next<<endl;

    first->next = second;
    cout << "Address inside first->next: " << first->next << endl;


    second->next = third;
    third->next = fourth;
    fourth->next = fifth;


    cout<<"Printing linked list"<<endl;
    printLL(first);


    return 0;
}