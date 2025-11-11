#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
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


int findlenOfLL(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp  != NULL){
        temp = temp->next;
        len++;
    } 
    return len;
}

Node*  findmiddleNode(int len, Node* &head){
    int mid;
    if(len % 2 == 0){
        mid = len/2;
    }
    else{
        mid =  (len/2)+1;
    }

    int i = 1;
    Node* temp = head;
    while(i < mid ){
        temp = temp->next;
        i++;
    }
    return temp;

}


int main(){
    Node* first = new Node(12);
    Node* second = new Node(24);
    Node* third = new Node(36);
    Node* fourth = new Node(48);
    Node* fifth = new Node(60);
    Node* sixth = new Node(72);



    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    Node* head = first;
    Node* tail = sixth;

    int len = findlenOfLL(head);



    //middle of even no of nodes
    Node* ans = findmiddleNode(len,head);
    cout<<"middle node is " << ans->data <<endl;
 
    cout<<endl;
    printLL(head);



    

    return 0;
}